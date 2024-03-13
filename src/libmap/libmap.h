/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   map.h                                                   4 2              */
/*                                                        (@)-=-(@)           */
/*   By: fwhite42 <FUCK THE NORM>                          (  o  )            */
/*                                                       _/'-----'\_          */
/*   Created: 2024/02/21 04:33:38 by fwhite42          \\ \\     // //        */
/*   Updated: 2024/02/21 12:28:16 by fwhite42           _)/_\---/_\(_         */
/*                                                                            */
/* ************************************************************************** */
#ifndef MAP_H
# define MAP_H

typedef struct s_map
{
	unsigned long	width;
	unsigned long	height;
	void			*view;
	char			*buff;
}	t_map;

void			*map_create(unsigned long width, unsigned long height);
void			map_print(void *self);
unsigned long	*map_get_width(void *self);
unsigned long	*map_get_height(void *self);
char			*map_get_buff(void *self);
void			*map_get_view(void *self);
void			map_load_from_path(void *self, char *file_path);
void 			map_save_to_path(void *self, char *file_path);
char 			map_read_at(void *self, int x, int y);
void 			map_write_at(void *self, int x, int y, char data);
char 			map_vread_at(void *self, int x, int y);
void 			map_vwrite_at(void *self, int x, int y, char data);
#endif
