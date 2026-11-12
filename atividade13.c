#include <stdio.h>

int main() {

int mes;
int ano;

printf("digite um mes\n");
scanf("%d", &mes);

printf("digite um ano\n");
scanf("%d", &ano);

if (mes < 1 || mes > 12) {
    printf("Mes invalido");
}

else if  (mes == 1 || mes == 3 ||mes == 5 ||mes == 7 ||
          mes == 8 ||mes == 10 || mes == 12) {
    printf("31 dias");
}

else if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {
    printf("30 dias");
}

else if (mes == 2) {
    if (ano % 4 == 0 && (ano % 100 != 0 || ano % 400 == 0)){
    printf("29 dias bissexto");}
else printf("28 dias nao e bissexto");
}

else printf ("Mês inválido");

return 0;
}
