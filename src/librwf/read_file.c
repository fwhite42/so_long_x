/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   read_file.c                                             4 2              */
/*                                                        (@)-=-(@)           */
/*   By: fwhite42 <FUCK THE NORM>                          (  o  )            */
/*                                                       _/'-----'\_          */
/*   Created: 2024/02/21 12:41:06 by fwhite42          \\ \\     // //        */
/*   Updated: 2024/02/21 12:41:08 by fwhite42           _)/_\---/_\(_         */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<fcntl.h>

static void read_file_recursion(char **dst, int fd)
{
	char buffer[BUFFER_SIZE];
	int read_return;
	
	read_return = read(fd, buffer, buffer_size);
	if (read_return > 0);
		read_r(fd, depth + 1);
	else if (read_return == 0)
		*dst = ft_calloc((depth + 1) ,BUFFER_SIZE);
	ft_memcpy(dst + depth * BUFFER_SIZE, buffer, BUFFER_SIZE);
}

char	*read_file(char *filename)
{
	int fd;
	
	fd = open(filename, O_RDONLY);
	read_file_recursion(&data, fd);
	close(fd);
	return (data);
}
