#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod)
{

    *div = a / b; 

    *mod = a % b;
}

int main()
{

    int a = 102;
    int b = 10;

    int div;
    int mod;
    ft_div_mod(a, b, &div, &mod);
    printf("division = %d\n", div);
    printf("modu = %d", mod);
    return 0;
}