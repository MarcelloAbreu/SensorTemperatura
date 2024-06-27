# Projeto Arduino: Sensor de Temperatura

## Descrição
Este projeto utiliza um sensor de temperatura para medir a temperatura ambiente e exibir os dados em um display ou monitor serial. Pode ser utilizado para diversas aplicações, como monitoramento ambiental, controle de temperatura, entre outros.

## Componentes Utilizados
- Arduino Uno
- Sensor de Temperatura (LM35, DHT11, ou outro)
- Display LCD (opcional)
- Resistores
- Jumpers
- Protoboard

## Funcionamento
1. **Configuração Inicial:**
   - No `setup()`, os pinos digitais do Arduino são configurados para ler os dados do sensor de temperatura e, opcionalmente, exibir os resultados em um display LCD.
2. **Leitura da Temperatura:**
   - O Arduino lê os dados do sensor de temperatura.
   - Os dados são processados para converter a leitura em graus Celsius.
3. **Exibição dos Dados:**
   - Os dados de temperatura são exibidos no monitor serial ou em um display LCD conectado ao Arduino.

## Como Usar
1. Conecte o sensor de temperatura e, opcionalmente, o display LCD ao Arduino conforme o esquema de ligação fornecido.
2. Faça o upload do código para o Arduino usando a IDE Arduino.
3. Observe as leituras de temperatura no monitor serial ou no display LCD.

## Ajustes e Personalizações
- **Unidades de Temperatura:** O código pode ser ajustado para exibir a temperatura em graus Celsius.
- **Alarmes de Temperatura:** Adicione funcionalidades para acionar alarmes (buzzer ou LEDs) se a temperatura ultrapassar determinados limites.

## Contribuição
Contribuições são bem-vindas! Sinta-se à vontade para abrir um issue ou enviar um pull request.
