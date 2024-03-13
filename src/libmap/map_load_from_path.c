/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   map_load_from_path.c                                    4 2              */
/*                                                        (@)-=-(@)           */
/*   By: fwhite42 <FUCK THE NORM>                          (  o  )            */
/*                                                       _/'-----'\_          */
/*   Created: 2024/02/21 13:07:13 by fwhite42          \\ \\     // //        */
/*   Updated: 2024/02/21 13:07:23 by fwhite42           _)/_\---/_\(_         */
/*                                                                            */
/* ************************************************************************** */

void map_load_from_path(void *self, char *filename)
{
	(t_map *)self->width = 0;
	(t_map *)self->height = 0;
	(t_map *)self->buff = read_file(filename);
	while ((t_map *)self->buff[(t_map *)self->width++])
		;
	(t_map *)self->height = ft_strlen((t_map *)self->buff) / (t_map *)self->width;
}
