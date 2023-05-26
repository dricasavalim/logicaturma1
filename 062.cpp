/*
Faça um programa que, dado um conjunto de N numeros, determine o menor valor,
o maior valor e a soma dos valores.
*/
#include <cmath>
#include <cstring>
#include <ctype.h>
#include <stdio.h>
int main()
{
    // Para resolver com um laço é necessário utilizar uma lista de numeros
    float numeros[1000], menor_numero, maior_numero, soma;
    int contador = 0;
    while (1)
    {
        printf("\nDigite um número qualquer ou 0 para parar e exibir os "
               "resultados: ");
        contador++;
        scanf("%f", &numeros[contador]);
        if (numeros[contador] == 0)
        {
            contador--;
            break;
        }
    }

    menor_numero = INFINITY;
    for (int i = 1; i <= contador; i++)
    {
        if (numeros[i] < menor_numero)
            menor_numero = numeros[i];
    }
    printf("\nO menor número é %f", menor_numero);

    maior_numero = -INFINITY;
    for (int i = 1; i <= contador; i++)
    {
        if (numeros[i] > maior_numero)
            maior_numero = numeros[i];
    }
    printf("\nO maior número é %f", maior_numero);

    soma = 0;
    for (int i = 1; i <= contador; i++)
        soma += numeros[i];

    printf("\nA soma dos numeros é %f", soma);
    return 0;
}
