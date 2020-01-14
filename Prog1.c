#include <stdio.h>

float fahrenheit; //Cria uma variável do tipo float
float celcius; //Cria uma variável do tipo float

int inputs(){

    printf("Insria o valor em Fahrenheit para converter para Celcius: "); //Pede ao utilizador um número
    scanf(" %f", &fahrenheit); //Guarda o input do utilizador

    conversao(); //Vai para a função conversao

}

int conversao(){

    celcius = (fahrenheit - 32) / 1.8; //Calcula e converte quantos graus celcius são o input do utilizador

    output(); //Vai para a função output

}

int output(){

    printf("%.2f graus Fahrenheit são %.2f graus Celcius\n", fahrenheit, celcius); //Mostra ao utilizador a conversão

}

int main(void){

    inputs(); //Vai para a função inputs

}