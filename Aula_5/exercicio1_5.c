#include <stdio.h>

#define EXIT_SUCCESS 0
#define SIZE 8

int main()
{
    int notes[] = {200, 100, 50, 20, 10, 5, 2, 1};
    for (int i = 0; i < SIZE; i++)
    {

        printf("Notes [%d] = %d\n", i, notes[i]);
    }
    return EXIT_SUCCESS;
}