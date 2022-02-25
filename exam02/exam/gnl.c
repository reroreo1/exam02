#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>


char *ft_strdup(char *s)
{
	int i = 0;
	while(s[i++]);
	char *p;
	p = malloc(i + 1);
	if (!p)
		return 0;
	i = 0;
	while(s[i])
	{	
		p[i] = s[i];
		i++;
	}
	p[i] = 0;
	return p; 
}
char	*get_next_line(int fd)
{
	char s[1000000] = {0};
	int i = 0;
	while(read(fd,&s[i],1) > 0)
	{
		if(s[i++] == '\n')
			break;
	}
	return((s[0] != 0 && BUFFER_SIZE > 0 ) ? ft_strdup(s) : NULL);
}

int main()
{
	char *str;
	int fd = open("inter.c", O_RDONLY);
	while ((str = get_next_line(fd) ) != NULL)
	{
		printf("%s", str);
	}
}