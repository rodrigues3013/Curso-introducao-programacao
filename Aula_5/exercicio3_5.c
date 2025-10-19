#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define EXIT_SUCCESS 0
#define EXIT_FAILURE 1
#define SIZE 100

int main()
{
    char name[SIZE];
    printf("Qual o seu nome?");
    if (fgets(name, SIZE, stdin) != NULL)
    {
        name[strcspn(name, "\n")] = '\0';
        for (int i = 0; name[i] != '\0'; i++)
        {
            if (name[i] == '\n')
            {
                name[i] = '\0';
                break;
            }
        }

        int tamanho = 0;
        for (tamanho = 0; name[tamanho] != '\0'; tamanho++)
        {
        }
        printf("Você digitou: %s\n", name);
        printf("O tamanho do seu nome é: caracteres. %d\n", tamanho);
    }
}
