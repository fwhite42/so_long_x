/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   view_set_pos.c                                          4 2              */
/*                                                        (@)-=-(@)           */
/*   By: fwhite42 <FUCK THE NORM>                          (  o  )            */
/*                                                       _/'-----'\_          */
/*   Created: 2024/02/21 13:29:40 by fwhite42          \\ \\     // //        */
/*   Updated: 2024/02/21 13:29:52 by fwhite42           _)/_\---/_\(_         */
/*                                                                            */
/* ************************************************************************** */

#include"libview.h"

void	*view_set_position(void *self, unsigned long top, unsigned long left)
{
	(t_view *)self->top = top;
	(t_view *)self->left = left;	
}
