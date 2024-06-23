#include <stdio.h>

void ft_swap(int *a, int *b)
{

    int stock = *a;// en accesde a la valeur li katpointi 3liha 
    *a = *b;
    *b = stock;
}

int main()
{

    int a = 10;
    int b = 20;
    ft_swap(&a, &b);
    printf("a = %d", a);
    printf("b = %d", b);
    return 0;
}