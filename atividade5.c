#include <stdio.h>

int main(){

   int idade;
   
   printf("digite sua idade\n");
   scanf("%d", &idade);

   if (idade < 16){
      printf("nao vota");
   }
   else if ((idade >= 16 && idade <= 17) || idade >= 70) {
    printf("voto facultativo");
}
   else printf("voto obrigatorio");
         
   return 0;
}