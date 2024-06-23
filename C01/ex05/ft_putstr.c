#include <unistd.h>

void ft_putstr(char *str)
{
    while (*str)
    {
        
    write(1, str, 1);

    str++;
    }
    
}


int main(){

char str[]= "hello";
ft_putstr(str);
    return 0;
}
