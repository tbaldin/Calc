// calculcadora Taiane e Diego
#include <stdio.h>
void testePrimos(){



}
void porcent(float a, float b){
    float x;
    x = (b*100)/a;
    printf("\n\nB e %2.f%% de A", x);
}
void mediaNumeros(int a,int b){
    float med;
    med = (a + b)/2;
}
void mostraPrimosEntre(){



}



int main (){
    float a, b;
    int op;
    printf("\nDigite um numero A:\n");
    scanf("%d", &a);
    printf("\nDigite um numero B:\n");
    scanf("%d", &b);
    printf("Digite a operacao: \n\t0 - Porcentagem\n\t1 - Teste se Primo\n\t2 - Mostra primos entre numeros\n\t3 - Média entre Numeros\n");
    scanf("%d",&op);

    switch (op){
        case 0:
            porcent(a,b);
            break;
        case 1:
            printf("Teste se Primo\n");
            testePrimos(a,b);
            break;
        case 2:
            printf("Mostra primos entre numeros");
            mostraPrimosEntre(a,b);
            break;
        case 3:
            printf("Média entre Numeros");
            mediaNumeros(a,b);
            break;
    }
    return 0;
}
