#include <stdio.h> 
#include <ctype.h> 
#include <string.h> 
int main(){

char caractere;




printf("digite uma caractere\n");
scanf(" %c", &caractere);
caractere = tolower(caractere);

if ( caractere == 'a' || caractere == 'e' || caractere == 'i' || caractere == 'o' || caractere == 'u') {
printf("e uma vogal");}

else if( caractere >= 'a' && caractere <= 'z'){
    printf("e uma consoante");
}
else printf("simbolo");



return 0;
}