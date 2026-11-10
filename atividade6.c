#include <stdio.h>

int main() {

    float salario;
    float novosalario1;
    float novosalario2;

    printf("digite o salario\n");
    scanf("%f", &salario);

    novosalario2 = salario + (salario * 0.10);
    novosalario1 = salario + (salario * 0.15);
    
    if (salario <= 1500){
        printf("reajuste novo salario R$ %.2f", novosalario1);
    }
    else printf("reajuste novo salario R$ %.2f", novosalario2);
    

    return 0;
}