#include <stdio.h>

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
    int cond = TRUE;

    if (!cond)
    {
        printf("Entrou no if\n");
    }

    return EXIT_SUCCESS;
}

// tempo do video ini: 2:00:02 fim: -0:49:47
