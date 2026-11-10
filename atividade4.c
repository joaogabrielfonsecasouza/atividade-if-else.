#include <stdio.h>

int main(){

int a;
int b;
int c;

printf("digite 3 numeros\n");
scanf("%d %d %d" , &a, &b, &c);

if (a >= b){
   if (a >= c) {
    printf("maior numero %d", a);
   }
    else printf("maior numero %d", c);
}
else { 
    if(b >= c){
    printf("maior numero %d" , b);
    }
    else printf("maior numero %d", c);
    }

return 0; 

}