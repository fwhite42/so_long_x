/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   map_get_width.c                                         4 2              */
/*                                                        (@)-=-(@)           */
/*   By: fwhite42 <FUCK THE NORM>                          (  o  )            */
/*                                                       _/'-----'\_          */
/*   Created: 2024/02/21 13:20:43 by fwhite42          \\ \\     // //        */
/*   Updated: 2024/02/21 13:21:10 by fwhite42           _)/_\---/_\(_         */
/*                                                                            */
/* ************************************************************************** */

#include"libmap.h"

unsigned long	map_get_width(void *self)
{
	return ((t_map *self)->width);
}
