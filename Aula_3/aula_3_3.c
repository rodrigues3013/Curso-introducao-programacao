#include <stdio.h>

#define EXIT_SUCCESS 0
#define EXIT_FAILURE 1

#define TRUE 1
#define FALSE 0

int main()
{
    int cond = FALSE;
    int cond2 = TRUE;

    if (cond)
    {
        printf("Entrou no if\n");
    }
    else if (cond2)
    {
        printf("Entrou no segundo if\n");
    }

    printf("Saindo do if/else!\n");

    return EXIT_SUCCESS;
}