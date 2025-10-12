#include <stdio.h>

#define EXIT_SUCCESS 0

int main()
{
    int value = 0;
    printf("Digite um valor do saque: ");
    scanf("%d", &value);

    // 200
    // 100
    // 50
    // 20
    // 10
    // 5
    // 2
    // 1
    if (value % 2 == 0)
    {
        printf(% d\n, value % 2);
    }
    printf(% d\n, value % 2);
    return EXIT_SUCCESS;
}
