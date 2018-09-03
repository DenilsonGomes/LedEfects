/*Autor: Denilson Gomes Vaz da Silva
* Graduando em Engenharia de Computação
* Universidade Federal do Ceará - UFC
*
* LedEfects:
* Codigo para, juntamento com um conjunto de leds devidamente
conectados ao arduino, obter efeitos interessantes visualmente!
* Cada led deve ser conectado a uma porta do arduino.
*/

//--Bibliotecas
#include <Arduino.h>
#include <C:\Users\Tery\Documents\PlatformIO\Projects\LedEfects\lib\funcoes.h>

//--Constantes e Variaveis
#define N 9 //Numero de leds
int leds[N]; //Vetor dos leds

//--Setup
void setup() {
    Serial.begin(9600); //Inicia o monitor serial

    for(int i = 0;i<N;i++){ //Para os leds
        leds[i] = i+2; //Valor da porta do arduino para o i-ésimo led
    }

    for(int i=0;i<N;i++){ //Para os leds
        pinMode(leds[i],OUTPUT); //Define os leds como saida
    }
}

//--Loop
void loop(){
    //Acende um led de cada vez na ordem crescente por um determinado tempo
    //acende1SeqCrescente(vetor de leds,Numero de leds,tempo em milisegundos);
    acende1SeqCrescente(leds,N,200);

    //Acende um led de cada vez na ordem decrescente por um determinado tempo
    //acende1SeqCrescente(vetor de leds,Numero de leds,tempo em milisegundos);
    acende1SeqDecrescente(leds, N, 500);
}