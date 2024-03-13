/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   map_create.c                                            4 2              */
/*                                                        (@)-=-(@)           */
/*   By: fwhite42 <FUCK THE NORM>                          (  o  )            */
/*                                                       _/'-----'\_          */
/*   Created: 2024/02/21 12:34:37 by fwhite42          \\ \\     // //        */
/*   Updated: 2024/02/21 12:34:40 by fwhite42           _)/_\---/_\(_         */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include"libmap.h"

void	*map_create(int width, int height)
{
	void	*map;
	void	*buff;

	map = malloc(sizeof(t_map));
	buff = malloc((width + 1) * height + 1);
	(t_map *)map->buff = buff;
	(t_map *)map->width = width;
	(t_map *)map->width = height;
	(t_map *)map->view = NULL;
	return (buff);
}
