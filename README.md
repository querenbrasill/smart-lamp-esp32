# Smart-lamp-ESP32 - Projeto IoT
## Descrição do Projeto
Este projeto fundamenta-se em um sistema Iot utilizando ESP32, sensor como entrada e um LED como atuador.
O sistema representa uma lâmpada inteligente baseada em IoT, onde o ESP32 realiza a leitura do sensor e o LED reage conforme a lógica implementada.
## Objetivo 
Apresentar o funcionamento de um sistema IoT com leitura de sensor e acionamento de atuador (LED), permitindo ser ampliado para comunicação via internet.
## Funcionamento 
O ESP32 executa a leitura do sensor e processa os dados recebidos. Com base na lógica implementada, o LED é acionado ou desligado conforme o estado da luz, acendendo quando for preciso e apagando quando não há detecção, simulando o comportamento de uma lâmpada inteligente.

## Componentes utilizados
- ESP32 (plataforma de desenvolvimento)
- Sensor digital (simulado)
- LED (atuador)
- Resistor(limitação de corrente do LED)
- Jumpers (conexões entre componentes)
- Protoboard( simulação)

 
 ## Comunicação e Protocolos

 O  sistema utiliza conexão Wi-Fi para acessar à rede, executando sobre o protocolo TCI/IP.
 A comunicação IoT pode ser realizada utilizando o protocolo MQTT para envio e recebimento de mensagens via broker.

## Tópicos MQTT utilizados
-`casa/luz/ldr`- valor do sensor LDR                                                                                                                                
-`residencia/lampada/status` - estado da lâmpada (ESCURO/CLARO

## Hardware Utilizado
-ESP32 (simulado no Wokwi)
-Sensor LDR
-LED
-Resistor
-Protoboard(simulação)
-Jumpers

## Software Utilizado
-ESP32 Framework

-Biblioteca PubSubclient.h

-Simulação pelo Wokwi

 ## Simulação 
 O projeto foi desenvolvido e testado na plataforma Wokwi.
 Durante os testes:
 - O sistema foi validado em ambas as condições de baixa e alta luminosidade (ESCURO/CLARO)
 - O LED respondeu perfeitamente à leitura do sensor
 - A comunicação MQTT funcionou em tempo real

## Apresentação
O sistema apresenta
- Conexão Wi-Fi
- Comunicação MQTT
- Leitura do sensor LDR
- Acionamento do LED
## Como reproduzir
Abra a simulação no Wokwi, selecione a placa ESP32, carregue o código do ESP32, adicione os componentes necessários e a biblioteca necessária, monte o circuito na protoboard virtual e execute o projeto.
Por fim, adicione um dashboard da sua preferência para demonstrar os dados em tempo real.
 
