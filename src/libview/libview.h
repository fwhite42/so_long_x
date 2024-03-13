/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   libview.h                                               4 2              */
/*                                                        (@)-=-(@)           */
/*   By: fwhite42 <FUCK THE NORM>                          (  o  )            */
/*                                                       _/'-----'\_          */
/*   Created: 2024/02/21 13:27:35 by fwhite42          \\ \\     // //        */
/*   Updated: 2024/02/21 13:28:09 by fwhite42           _)/_\---/_\(_         */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBVIEW_H
# define LIBVIEW_H
typedef struct s_view
{
	int top;
	int left;
	int width;
	int height;
}	t_view;

void			view_set_size(void *self, unsigned long w, unsigned long h);
void			view_set_pos(void *self, unsigned long t, unsigned long b);
unsigned long	view_compute_index(void *self, int i, int j);

#endif
