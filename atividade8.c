#include <stdio.h>

int main(){

 int velocidade;

 printf("qual a velocidade do carro\n");
 scanf("%d", &velocidade);

 if (velocidade <= 80){
    printf("sem multa");
 }
 else if (velocidade <= 100){
    printf("multa de 100 reais");
 }
else printf("multa de 200 reais");

return 0;

}