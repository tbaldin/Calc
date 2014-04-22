// calculcadora Taiane e Diego
#include <stdio.h>




int main (){
    printf("Ola Mundo");
    int op,a,b;

    printf("Digite a operacao: \n\t0 - Porcentagem\n\t1 -Teste se Primo\n\t2 - Mostra primos entre numeros\n\t3 - Média entre Numeros");
    scanf("%d",&op);

    printf("digite um numero \n");
    scanf("%d",a);
    printf("digite segundo numero \n");
    scanf("%d",b);

    switch (op){
        case 0:
            //soma
            printf("Porcentagem");

            break;
        case 1:
            printf("Teste se Primo");
            //sub
            break;

        case 3:
            //mult
            printf("Mostra primos entre numeros");
            multiplicacao(a,b);

            break;

        case 4:
            printf("Média entre Numeros");
            divisao(a,b);
            break;
    }

    return 0;



}
