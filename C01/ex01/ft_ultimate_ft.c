#include <stdio.h>

void ft_ultimate_ft(int *********nbr)
{
    // en changer la valeur de a verse 9 niveau
    *********nbr = 42;
}

int main()
{
    int a;
    int *p1 = &a;
    int **p2 = &p1;
    int ***p3 = &p2;
    int ****p4 = &p3;
    int *****p5 = &p4;
    int ******p6 = &p5;
    int *******p7 = &p6;
    int ********p8 = &p7;

    ft_ultimate_ft(&p8);
    printf("nb: %d\n", a);
    return 0;
}