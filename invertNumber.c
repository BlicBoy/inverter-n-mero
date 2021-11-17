#include <stdio.h>
#include <stdlib.h>



int main()
{
    system("cls");

    int numInvertido = 0, resto = 0, num;

    printf("Numero: ");
    scanf("%d", &num);


    while (num != 0)
    {
        resto = num % 10;
        numInvertido = numInvertido * 10 + resto;
        num /= 10;
    }

    printf("%d", numInvertido);

    getchar();

}