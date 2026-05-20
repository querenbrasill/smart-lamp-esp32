#include <WiFi.h>
#include <PubSubClient.h>

const char*ssid="Wokwi-GUEST";
const char*password="";

const char* mqtt_server ="broker.hivemq.com";

WiFiClient espClient;
PubSubClient client(espClient);

#define LED_PIN 22
#define LDR_PIN 32


int ldrValue;


void setup_wifi(){
 WiFi.begin(ssid, password);

while(WiFi.status() !=WL_CONNECTED){
delay(500);

Serial.print(".");
}


Serial.println("\nWifi conectado");
}

void reconnect(){
while (!client.connected()){
  if (client.connect("ESP32_LDR")){
Serial.println("MQTT conectado");
} else{
 Serial.print("Falha MQTT, estado:");
Serial.println(client.state());
delay(2000);

}
}
}

void setup(){
Serial.begin(115200);
pinMode(LED_PIN,OUTPUT);

setup_wifi();
client.setServer(mqtt_server,1883);
}


void loop(){
if (!client.connected()) reconnect();
client.loop();


ldrValue= analogRead(LDR_PIN);



char msg[10];
sprintf(msg, "%d", ldrValue);
client.publish("casa/luz/ldr",msg);



if(ldrValue<2000){
digitalWrite(LED_PIN, HIGH);
client.publish("residencia/lampada/status", "ESCURO");
Serial.println("ESCURO- LED LIGADO");

}else{
  digitalWrite(LED_PIN,LOW);
  client.publish("residencia/lampada/status", "CLARO");
  Serial.println("CLARO- LED DESLIGADO");
  
}

Serial.print("LDR: ");
Serial.println(ldrValue);

delay(2000);
}