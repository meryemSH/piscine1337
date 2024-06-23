#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b)
{

    int modulus = *a;
    *a = *a / *b;
    *b = modulus % *b;
}

int main(){

int a = 102;
int b = 10;

ft_ultimate_div_mod(&a, &b);
    printf("a = %d\n", a);
    printf("b = %d", b);
    return 0;
}