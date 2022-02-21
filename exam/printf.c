
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

void putchar(char s,int *l)
{
    write(1,s,1);
    (*l)++;
}

int ft_printf(const char *s, ...)
{
    va_list ap;
    int len;
    int i = 0;

    while(s[i])
    {
        if (s[i] != '%')
            putchar(s[i++], &len);
        else
        {
            i++;
            if(s[i] == 's')
            {
                putstr()
            }
            else if(s[i] == 's')
            {
                
            }
            else if(s[i] == 's')
            {
                
            }
            else if(s[i] == 's')
            {
                
            }
            else if(s[i] == 's')
            {
                
            }
        }
        
    }
}