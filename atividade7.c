#include <stdio.h>


int main(){
    
    int numero;

    printf("digite um numero de 1 a 7\n");
    scanf("%d", &numero);

    if(numero == 1){
        printf("domingo");
    }
    else if(numero == 2){
        printf("segunda");
    }
    else if(numero == 3){
        printf("terca");
    }
    else if(numero == 4){
        printf("quarta");
    }
    else if(numero == 5){
        printf("quinta");
    }
    else if(numero == 6){
        printf("sexta");
    }
    else if(numero == 7){
        printf("sabado");
    }
    else printf("numero invalido");

return 0; 
}