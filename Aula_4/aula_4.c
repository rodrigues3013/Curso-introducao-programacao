#include <stdio.h>

enum Weedkday
{
    Sunday,
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday
};

int main()
{
    int value;

    printf("Digite um número de 0 a 6 para o dia da semana:\n");
    printf("(0 = Domingo, 1 = Segunda, ..., 6 = Sábado)\n");
    scanf("%d", &value);

    switch (value)
    {
    case Sunday:
        printf("O Valor que você digitou correponde ao Domingo.\n");
        break;
    case Monday:
        printf("O Valor que você digitou correponde a Segunda-feira.\n");
        break;
    case Tuesday:
        printf("O Valor que você digitou correponde a Terça-feira.\n");
        break;
    case Wednesday:
        printf("O Valor que você digitou correponde a Quarta-feira.\n");
        break;
    case Thursday:
        printf("O Valor que você digitou correponde a Quinta-feira.\n");
        break;
    case Friday:
        printf("O Valor que você digitou correponde a Sexta-feira.\n");
        break;
    case Saturday:
        printf("O Valor que você digitou correponde ao Sábado.\n");
        break;
    default:
        printf("Valor não corresponde a nenhum dia!.\n");
    }
}
