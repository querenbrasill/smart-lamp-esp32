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
- 
-Sensor digital (simulador)
-LED (atuador)
- Resistor(limitação de corrente do LED)
- Jumpers (conexões entre componentes)
- Protoboard( simulação)

 
 ## Comunicação e Protocolos

 O  sistema utiliza conexão Wi-Fi para acessar à rede, executando sobre o protocolo TCI/IP.
 A comunicação IoT pode ser realizada utilizando o protocolo MQTT para envio e recebimento de mensagens via broker.

 ## Simulação 
 O projeto foi desenvolvido e testado na plataforma Wokwi.

## Como reproduzir
Abra a simulação no Wokwi, selecione a placa ESP32, carregue o código do ESP32, adicione os componentes necessários, monte o circuito na protoboard virtual e execute o projeto.
 ##
