#include <stdio.h>

    //cria uma variável
    int dia;

int main(){

        //Pede e guarda um input ao utilizador
        printf("Insira um número: ");
        scanf(" %d", &dia);
        printf("%d corresponde a : ", dia);

    switch(dia){ //Toma uma escolha, dependendo da resposta do utilizador.

        case 1:
            printf("Domingo\n");
        break;
            
        case 2:
            printf("Segunda\n");
        break;
            
        case 3:
            printf("Terça\n");
        break;
            
        case 4:
            printf("Quarta\n");
        break;
            
        case 5:
            printf("Quinta\n");
        break;
            
        case 6:
            printf("Sexta\n");
        break;

        case 7:
            printf("Sábado\n");
        break;

        default: //Isto acontece se não for nenhuma das outras opções
            printf("Insira um valor de 1 a 7\n");
            main();
        break;

    }

}