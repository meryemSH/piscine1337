#include <stdio.h>

int ft_strlen(char *str)
{
    int i = 0; // initialise par 0

    while (*str)
    {
        *str++;
        i++;  
    }

    return i; // envoyer le count a main
    
}

int main()
{

    char str[] = "meryem";
    int i = ft_strlen(str);
    printf("%d\n", i);
    return 0;
}
