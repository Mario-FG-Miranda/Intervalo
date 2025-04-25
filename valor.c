#include <stdio.h>

int main(void){
    double Valor;
    scanf("%lf",&Valor); 
    if (Valor >= 0 && Valor <=25){
        printf("Intervalo [0,25]\n");
        return 0;
    } else if (Valor > 25 && Valor <=50){
        printf("Intervalo (25,50]\n");
        return 0;
    } else if (Valor > 50 && Valor <=75){
        printf("Intervalo (50,75]\n");
        return 0;
    } else if (Valor >75 && Valor <=100){
        printf("Intervalo (75,100]\n");
        return 0;
    } else printf("Fora de intervalo\n");
    return 0;
}