#include <stdio.h>

#define EXIT_SUCCESS 0
#define EXIT_FAILURE 1

#define TRUE 1
#define FALSE 0

int main(){
    int n1, n2;
    printf("Digite o valor de n1: ");
    scanf("%d", &n1);

    printf("Digite o valor de n2: ");
    scanf("%d", &n2);

    if (n1 == n2 ){
        printf("As variáveis a e b são iguais: %d = %d\n", n1, n2);
    } else {
        printf("As variáveis a e b são diferentes: %d != %d\n", n1, n1);
    }
    

    return EXIT_SUCCESS;

}