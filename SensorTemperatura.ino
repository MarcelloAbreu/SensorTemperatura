#include "dht.h"

int buzzer = 6;
int pinSensor = A2;

dht DHT;
void setup() {
 Serial.begin(9600);
 inicializa_componente(buzzer,OUTPUT);
 delay(2000); //Tempo antes de iniciar
}

void loop() {
controla_temperatura();
}

void inicializa_componente(int comp,int operacao){
  pinMode(comp, operacao);
}
int temperatura(){
  DHT.read11(pinSensor);//Leitura do componente na porta analógica especificada
  Serial.print(" - ");
  Serial.print("Umidade: ");
  Serial.println(DHT.humidity);
  Serial.print("Temperatura: ");
  Serial.print(DHT.temperature, 0);
  Serial.println("°C");
  delay(2000);
  return DHT.temperature;
}
void controla_temperatura(){
  int temp = temperatura();
  if(temp < 10){
    Serial.print("Clima Frio");
    tone(buzzer,400,1000);
  }
  else if(temp >= 10 && temp <25){
    Serial.print("Clima Moderado");
    tone(buzzer,300,650);
  }
  else if(temp >= 25 && temp <40){
    Serial.print("Clima Quente");
    tone(buzzer,100,200);
  }
  else{
    noTone(buzzer);
  }
}
