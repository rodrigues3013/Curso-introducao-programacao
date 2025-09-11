#include <stdio.h>

int main()
{
    char caracter = 'a';
    int variavel = 1000;
    float number = 3.141523;

    printf("carater: %c\n", caracter);
    printf("variavel: %d\n", variavel);
    printf("number: %f\n", number);

    caracter = 'b';
    variavel = -1000;
    number = 0;

    printf("caracter: %c\n", caracter);
    printf("caracter: %d\n", variavel);
    printf("number: %f\n", number);

    return 0;
}
