#include <stdio.h>

int main(){

float nota1;
float nota2;
float nota3;
int frequencia;
float media;

printf("digite a nota\n");
scanf("%f %f %f", &nota1, &nota2, &nota3);
printf("digite a frequencia\n");
scanf("%d", &frequencia);

media= (nota1 + nota2 + nota3)/3;

if (media >= 6  && frequencia >= 75){
    printf("aprovado");
}

else if (media < 6 && frequencia >= 75) {
    printf("reprovado por nota");
}
else if (media >= 6 && frequencia < 75) {
    printf("reprovado por falta");
}

else printf("reprovado por ambos");


return 0;
}