#include <stdio.h>

    int menu;
    float n1;
    float n2;
    float total;

int main(void){ //pede e guarda o input do user

    printf(" 1- Adição. \n 2- Subtração. \n 3- Multiplicação. \n 4- Divisão.\n");
    scanf(" %d", &menu);

    switch (menu){ //Calcula todas as operações

    case 1:
        printf("Insira o primeiro número: ");
        scanf(" %f", &n1);
        printf("Insira o segundo número: ");
        scanf(" %f", &n2);
        total = n1 + n2;
    break;

    case 2:
        printf("Insira o primeiro número: ");
        scanf(" %f", &n1);
        printf("Insira o segundo número: ");
        scanf(" %f", &n2);
        total = n1 - n2;
    break;

    case 3: 
        printf("Insira o primeiro número: ");
        scanf(" %f", &n1);
        printf("Insira o segundo número: ");
        scanf(" %f", &n2);
        total = n1 * n2;
    break;

    case 4: 
        printf("Insira o primeiro número: ");
        scanf(" %f", &n1);
        printf("Insira o segundo número: ");
        scanf(" %f", &n2);
        total = n1 / n2;
    break;
    
    default:
        printf("Insira um valor válido");
        main();
    break;
    
    }
    printf("%.2f\n",total);
}