/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   map_write_at.c                                          4 2              */
/*                                                        (@)-=-(@)           */
/*   By: fwhite42 <FUCK THE NORM>                          (  o  )            */
/*                                                       _/'-----'\_          */
/*   Created: 2024/02/21 12:36:58 by fwhite42          \\ \\     // //        */
/*   Updated: 2024/02/21 12:37:17 by fwhite42           _)/_\---/_\(_         */
/*                                                                            */
/* ************************************************************************** */

#include"map.h"

void map_write_at(void *self, int x, int y, int value)
{
	(t_map *)self->buff[x + y * ((t_map *)self->width + 1)] = value;
}
