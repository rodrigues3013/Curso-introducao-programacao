#include <stdio.h>
#include <stdlib.h>

#define EXIT_SUCCESS 0
#define EXIT_FAILURE 1

#define TRUE 1
#define FALSE 0

// == -> igual
// != -> diferente
// <  -> menor que
// <= -> menor igual que
// >  -> maior que
// >= -> maior igual que
// ! -> NÃO(negação)
// && -> E (AND)
// || -> OU (OR)

//

int main()
{
    int n1, n2;

    printf("Informe de dois números não nulos separados por espaço ");
    scanf("%d %d", &n1, &n2);

    if (!n1 || !n2)
    {
        printf("Erro: Foram informados valores nulo!\n");
        return (EXIT_FAILURE);
    }
    int res = n1 / n2;
    printf("O resultado da divisão é: %d\n", res);

    return EXIT_SUCCESS;
}
