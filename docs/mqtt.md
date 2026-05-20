
# Comunicação MQTT

## Broker utilizado

broker.hivemq.com

## Protocolo

MQTT sobre TCP/IP via Wi-FI (ESP32)

## Tópicos utilizados 

- casa/luz/ldr - envio do valor do sensor LDR
- residencia/lampada/status - estado da lâmpada(ESCURO/CLARO)

## Funcionamento

O ESP32 publica os dados do sensor e do sistema em tempo real via MQTT.