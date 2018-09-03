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

void acende1SeqCrescente(int x[], int n, int tempo){
    for(int i=0;i<n;i++){
        Serial.println(i+2);
        digitalWrite(x[i], HIGH);
        delay(tempo);
        digitalWrite(x[i], LOW);
    }
}

void acende1SeqDecrescente(int x[], int n, int tempo){
    for(int i=n-1;i>=0;i--){
        Serial.println(i+2);
        digitalWrite(x[i], HIGH);
        delay(tempo);
        digitalWrite(x[i], LOW);
    }
}