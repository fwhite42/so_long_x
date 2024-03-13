/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   map_save_to_path.c                                      4 2              */
/*                                                        (@)-=-(@)           */
/*   By: fwhite42 <FUCK THE NORM>                          (  o  )            */
/*                                                       _/'-----'\_          */
/*   Created: 2024/02/21 13:17:20 by fwhite42          \\ \\     // //        */
/*   Updated: 2024/02/21 13:18:11 by fwhite42           _)/_\---/_\(_         */
/*                                                                            */
/* ************************************************************************** */

#include"libmap.h"
#include"librwfile.h"

void map_save_data(void *self, char *filename)
{
	write_file(filename, (t_map *)self->buffer);
}
