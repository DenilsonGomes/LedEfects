/*Autor: Denilson Gomes Vaz da Silva
* Graduando em Engenharia de Computação
* Universidade Federal do Ceará - UFC
*
* funcoes:
* biblioteca para manipulação de led de forma a
obter efeitos interessantes visualmente
*/

//--Bibliotecas
#include <Arduino.h>

//acende1SeqCrescente(vetor de leds,Numero de leds,tempo em milisegundos)
void acende1SeqCrescente(int x[], int n, int tempo){
    for(int i=0;i<n;i++){ //Do primeiro pro ultimo led
        Serial.println(i+2); //Printa a porta digital do led
        digitalWrite(x[i], HIGH); //Acende o led
        delay(tempo); //Espera um tepo
        digitalWrite(x[i], LOW); //apaga o led
    }
}

//acende1SeqDecrescente(vetor de leds,Numero de leds,tempo em milisegundos)
void acende1SeqDecrescente(int x[], int n, int tempo){
    for(int i=n-1;i>=0;i--){ //Do ultimo para o primeiro led
        Serial.println(i+2); //printa a porta digital do led
        digitalWrite(x[i], HIGH); //Acende o led
        delay(tempo); //Espera um tempo
        digitalWrite(x[i], LOW); //Apaga o led
    }
}

void acende2SeqCrescente(int x[], const int n, int tempo){
    for(int i=0;i<n-1;i++){ //Do ultimo para o primeiro led
        Serial.println(i+2); //printa a porta digital do led
        Serial.println(i+3); //printa a porta digital do led
        digitalWrite(x[i], HIGH); //Acende o led
        digitalWrite(x[i+1], HIGH); //Acende o led
        delay(tempo); //Espera um tempo
        digitalWrite(x[i], LOW); //Apaga o led
        digitalWrite(x[i+1], LOW); //Apaga o led
    }
}

void acende2SeqDecrescente(int x[], int n, int tempo){
    for(int i=n+1;i>1;i--){ //Do ultimo para o primeiro led
        Serial.println(i); //printa a porta digital do led
        Serial.println(i-1); //printa a porta digital do led
        digitalWrite(x[i-1], HIGH); //Acende o led
        digitalWrite(x[i-2], HIGH); //Acende o led
        delay(tempo); //Espera um tempo
        digitalWrite(x[i-1], LOW); //Apaga o led
        digitalWrite(x[i-2], LOW); //Apaga o led
    }
}