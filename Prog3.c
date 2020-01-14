#include <stdio.h>

//Atribiução das variáveis e constantes
const float total = 500000;
const float percprim = 0.46;
const float percsec = 0.32;
float primeiro;
float segundo;
float terceiro;


int main(){ 

    //calculos
    primeiro = total*percprim; 
    segundo = total*percsec; 
    terceiro = total - primeiro - segundo;


    //output
    printf(" Prémio total: %.2f€;\n 1º Vencedor: %.2f€;\n 2º Vencedor: %.2f€;\n 3º Vencedor: %.2f€;\n", total, primeiro, segundo, terceiro);

}