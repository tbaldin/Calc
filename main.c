// calculcadora Taiane e Diego
#include <stdio.h>
void porcent(float a, float b){
    float x;
    x = (b*100)/a;
    printf("\n\nB e %2.f de A", x);
}

int main (){
    float a, b;
    printf("\nDigite um numero A:\n");
    scanf("%d", &a);
    printf("\nDigite um numero B:\n");
    scanf("%d", &b);

    porcent(a,b);

    return 0;



}
