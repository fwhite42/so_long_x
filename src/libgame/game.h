/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   game.h                                                  4 2              */
/*                                                        (@)-=-(@)           */
/*   By: fwhite42 <FUCK THE NORM>                          (  o  )            */
/*                                                       _/'-----'\_          */
/*   Created: 2024/02/23 16:37:46 by fwhite42          \\ \\     // //        */
/*   Updated: 2024/02/23 16:45:27 by fwhite42           _)/_\---/_\(_         */
/*                                                                            */
/* ************************************************************************** */

#ifndef GAME_H
# define GAME_H

typedef struct s_game
{
	void *map;
}	t_game;

void	*game_create();
void	game_config(void *self, char *config_file_name);
void	game_start(void *self);

#endif
