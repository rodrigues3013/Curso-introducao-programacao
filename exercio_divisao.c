#include <stdio.h>

int main () {
    float num1, num2, resultado;

    printf("Digite o primeiro número: ");
    scanf("%f", &num1);

    printf("Digite o segundo número: ");
    scanf("%f", &num2);

    if (num2 != 0) {
	resultado = num1 / num2;
        printf("O resultado da divisão é: %.2f\n", resultado);
   } else{
       printf("Erro: Divisão por zero!\n");	   
   }

   return 0; 

}
