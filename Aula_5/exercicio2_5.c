#include <stdio.h>

#define EXIT_SUCCESS 0
#define SIZE 10

int main()
{
    int notes[SIZE];

    printf("Digite 10 Números:\n");
    for (int i = 0; i < SIZE; i++)
    {
        printf("Número %d: ", i + 1);
        scanf("%d", &notes[i]);
    }
    printf("\nNúmeros digitados:\n");
    for (int i = 0; i < SIZE; i++)
    {
        printf("Número %d: %d\n", i + 1, notes[i]);
    }

    return EXIT_SUCCESS;
}