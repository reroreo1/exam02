#include <stdlib.h>

char	*get_next_line(int fd)
{
	char	*s;
	char		*buffer;
	char		*temp;
	int			ret;
	int  size = 1;

	if (fd < 0 || BUFFER_SIZE < 0)
		return (NULL);
	buffer = malloc(1);
	while ((ft_strchr(s, '\n')) == NULL)
	{
		ret = read(fd, buffer,size);
		if(ret < 0)
			return(NULL);
		if (ret == 0)
			break ;
		s = ft_strjoin(s, buffer);
		free(buffer);
	}
	return s;
}