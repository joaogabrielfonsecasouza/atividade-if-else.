#include <stdio.h> 
#include <string.h>
int main (){

 char login[10];
 char senha[10];

 printf("digite seu login\n");
 scanf("%9s", login);

 printf("digite sua senha\n");
 scanf("%9s", senha);

 if (strcmp(login, "admin") ==0 && strcmp(senha, "1234") ==0) {
    printf("acesso permitido");
 }
 else if (strcmp(login, "admin") !=0 && strcmp(senha, "1234") ==0) {
    printf("falha no login");
 }
  else if (strcmp(login, "admin") ==0 && strcmp(senha, "1234") !=0) {
    printf("falha na senha");
 }
 else printf("falha login e senha");

return 0;

}