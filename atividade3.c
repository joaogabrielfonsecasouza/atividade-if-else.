#include <stdio.h>
int main(){

int ano;

printf("digite o ano\n");
scanf("%d", &ano);

if (ano % 400 == 0) {
    printf("bissexto");
}
else if (ano % 4 == 0 && ano % 100 != 0) {
    printf("bissexto");
}
else printf("nao e bissexto");


return 0;

}
