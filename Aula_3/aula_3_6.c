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
    int n1 = 1, n2 = 3, n3 = 2, n4 = 2;
    if (n1 == n2 && n3 == n4)
    {
        printf("Entrei no primeiro if!\n");
    }
    if (n1 == n2 || n3 == n4)
    {
        printf("Entrei no segundo if!\n");
    }

    return EXIT_SUCCESS;
}
