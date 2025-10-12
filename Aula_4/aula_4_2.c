#include <stdio.h>

#define EXIT_SUCCESS 0
#define TRUE 1
#define FALSE 0

int main()
{
    int count = 1;
    while (count <= 100)
    {
        if (count == 10)
        {
            count++;
            continue;
        }

        printf("Contador: %d\n", count);
        count++;
    }
    return EXIT_SUCCESS;
}
