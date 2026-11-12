#include <stdio.h> 

int main(){

int lado1;
int lado2;
int lado3;

printf("digite o valor do lado 1\n");
scanf("%d", &lado1);

printf("digite o valor do lado 2\n");
scanf("%d", &lado2);

printf("digite o valor do lado 3\n");
scanf("%d", &lado3);

if (lado1 < lado2 + lado3 && lado2 < lado3 + lado1 && lado3 < lado2 + lado1){
printf("forma triangulo");


if (lado1 == lado2 && lado2 == lado3) {
    printf("\t Triangulo equilatero");
}
else if (lado1 == lado2 || lado2 == lado3 || lado1 == lado3) {
    printf("\t Triangulo isosceles");
}
else {
    printf("\t Triangulo escaleno");
}
}
else {
    printf("Nao forma triangulo");
}

return 0;

}