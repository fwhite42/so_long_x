/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   map_get_view.c                                          4 2              */
/*                                                        (@)-=-(@)           */
/*   By: fwhite42 <FUCK THE NORM>                          (  o  )            */
/*                                                       _/'-----'\_          */
/*   Created: 2024/02/21 13:19:30 by fwhite42          \\ \\     // //        */
/*   Updated: 2024/02/21 13:19:48 by fwhite42           _)/_\---/_\(_         */
/*                                                                            */
/* ************************************************************************** */

void *map_get_view(void *self)
{
	return ((t_map *self)->view);
}
