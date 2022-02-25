
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

void put_char(char s)
{
    write(1,&s,1);
    // (*l)++;
}
void putnbr_hex(unsigned int nb)
{
    char b[]= "0123456789abcdef";

    if (nb < 16)
		put_char(b[nb]);
    else 
    {   
        putnbr_hex(nb / 16);
        putnbr_hex(nb %16);
    }
}
void	ft_putnbr_fd(int nb, int fd)
{
	unsigned int	n;

	if (nb < 0)
	{
		ft_putchar_fd('-', fd);
		n = -nb;
	}
	else
		n = nb;
	if (n >= 10)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
	else
	{
		ft_putchar_fd(n + '0', fd);
	}
}
// int ft_printf(const char *s, ...)
// {
//     va_list ap;
//     int len;
//     int i = 0;

//     while(s[i])
//     {
//         if (s[i] != '%')
//             putchar(s[i++], &len);
//         else
//         {
//             i++;
//             if(s[i] == 's')
//             {
//                 putstr()
//             }
//             else if(s[i] == 's')
//             {
                
//             }
//             else if(s[i] == 's')
//             {
                
//             }
//             else if(s[i] == 's')
//             {
                
//             }
//             else if(s[i] == 's')
//             {
                
//             }
//         }
        
//     }
// }
int main()
{
    putnbr_hex(-124545);
    write(1,"\n",1);
    printf("%x\n",-124545);
}