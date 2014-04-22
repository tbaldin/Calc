// calculcadora Taiane e Diego
#include <stdio.h>

void porcent(float a, float b){
    float x;
    x = (b*100)/a;
    printf("\n\nB e %2.f%% de A", x);
}
void mediaNumeros(int a,int b){
    float med;
    med = (a + b)/2;


}



int main (){
    float a, b;
    int op;
    printf("\nDigite um numero A:\n");
    scanf("%d", &a);
    printf("\nDigite um numero B:\n");
    scanf("%d", &b);
    int op;

    printf("digite um numero A:\n");
    scanf("%f",&a);
    printf("digite um numero B:\n");
    scanf("%f",&b);

    printf("Digite a operacao: \n\t0 - Porcentagem\n\t1 - Teste se Primo\n\t2 - Mostra primos entre numeros\n\t3 - Média entre Numeros\n");
    scanf("%d",&op);

    switch (op){
        case 0:
            porcent(a,b);
            break;
        case 1:
            printf("Teste se Primo");
            //sub
            break;

        case 3:
            //mult
            printf("Mostra primos entre numeros");
            break;

        case 4:
            printf("Média entre Numeros");
            mediaNumeros(a,b);
            break;
    }

    return 0;



}
