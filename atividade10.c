#include <stdio.h> 

int main(){

int idade;
char resposta;

printf("digite sua idade\n");
scanf("%d", &idade);

do { printf("possui carteira? (s/n): \n");
    scanf(" %c" , &resposta);
} while (resposta != 's' && resposta != 'n');


if (idade >= 18) {
    if (resposta == 's'){
        printf("pode dirigir");
    }
    else printf("nao possui carteira");
}

else printf("nao possui idade minima");

return 0;
}