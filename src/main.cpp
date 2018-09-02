/*Autor: Denilson Gomes Vaz da Silva
* Graduando em Engenharia de Computação
* Universidade Federal do Ceará - UFC
*
* LedEfects:
* Codigo para, juntamento com um conjunto de leds devidamente
conectados ao arduino, obter efeitos interessantes visualmente
*/

//--Bibliotecas
#include <Arduino.h>

//--Constantes e Variaveis
#define N 9 //Numero de leds
int leds[N]; //Vetor dos leds
for(int i=1;i<N;i++){ //Para os leds
    leds[i] = i+1; //Valor da porta do arduino para o i-ésimo led
}

//--Setup
void setup() {
    // put your setup code here, to run once:
}

//--Loop
void loop() {
    // put your main code here, to run repeatedly:
}