#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>

int ft_strlen(char *str)
{
	int len;

	len = 0;
	while (str[len] != '\0')
	len++;
	return len;
}

char *ft_strjoin(char *s,char c)
{
	char *tmp;
	int len = ft_strlen(s);
	tmp = malloc(len + 2);
	
	strcpy(tmp, s);
	tmp[len] = c;
	tmp[len+1] = '\0';
	free(s);
	return tmp;
}
char	*get_next_line(int fd)
{
	char	*s;
	char		buffer;
	char		*temp;
	int			ret;
	int  size = 1;

	if (fd < 0 || BUFFER_SIZE < 0)
		return (NULL);
	s = malloc(2);
	s[0] ='\0';
	while (strchr(s,'\n') == NULL)
	{
		ret = read(fd, &buffer, size);
		if(ret < 0)
			return (NULL);
		if (ret == 0)
			break;
		s = ft_strjoin(s, buffer);
		if (buffer == '\n')
			return s;
	}
	return s;
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