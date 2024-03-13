/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   error_print.c                                           4 2              */
/*                                                        (@)-=-(@)           */
/*   By: fwhite42 <FUCK THE NORM>                          (  o  )            */
/*                                                       _/'-----'\_          */
/*   Created: 2024/02/22 01:35:48 by fwhite42          \\ \\     // //        */
/*   Updated: 2024/02/22 01:38:50 by fwhite42           _)/_\---/_\(_         */
/*                                                                            */
/* ************************************************************************** */

#include"errors.h"
#include"ft_printf.h"

void error_print(char error)
{
	if (!error)
		ft_printf("No ")
	ft_printf("Error: %#x\n", error);
	if (error && CONFIG_FILE_EXT)
		ft_printf("CONFIG_FILE_EXT\n");
	if (error && CONFIG_FILE_MISSING)
		ft_printf("CONFIG_FILE_MISSING\n");
	if (error && MAP_BROKEN)
		ft_printf("MAP_BROKEN\n");
	if (error && MAP_WALLS_BROKEN)
		ft_printf("MAP_WALLS_BROKEN\n");
	if (error && PLAYER_NOT_ON_MAP)
		ft_printf("PLAYER_NOT_ON_MAP\n");
	if (error && UNREACHABLE_EXIT)
		ft_printf("UNREACHABLE_EXIT\n");
	if (error && UNREACHABLE_COIN)
		ft_printf("UNREACHABLE_COIN\n");
}
