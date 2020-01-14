#include <stdio.h>

//Foram criada 3 variáveis do tipo int, números inteiros apénas.
int input; 
int sucessor;
int antecessor;

int inputs(){ //Pede um número ao utilizador e guarda-o

    printf("Insira um número inteiro para receber o seu sucessor e antecessor: ");
    scanf(" %d", &input);

    calculos();

}

int calculos(){ //Calcula o seu sucessor e o seu antecessor

    sucessor = input + 1;
    antecessor = input -1;

    output();

}

int output(){ //Mostra ao utilizador o antecessor e o sucessor

    printf("Nº inserido: %d; \nNº sucessor: %d; \nNº antecessor: %d; \n", input, sucessor, antecessor);

}

int main(){

    inputs();

}