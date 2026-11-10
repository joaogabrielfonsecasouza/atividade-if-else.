#include <stdio.h>
int main(){

 float nota1;
 float nota2;
 float media;

 printf("digite a nota\n");
 scanf("%f  %f", &nota1, &nota2);

media= (nota1 + nota2)/2;


if (media >= 6) {
    printf("aprovado");
}
else if (media >= 4) {
    printf("recuperacao");
}
else {
    printf("reprovado");
}

return 0;

}