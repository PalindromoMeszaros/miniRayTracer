/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   events.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablomar <pablomar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 14:17:03 by pablomar          #+#    #+#             */
/*   Updated: 2020/09/09 14:50:29 by pablomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/miniRT.h"

//Incluir funciones para liberar memorias varias

void	free_operations(t_mlx *mlx)
{	
	mlx_destroy_image(mlx->mlx_ptr, mlx->img_ptr);
	mlx_clear_window(mlx->mlx_ptr, mlx->win_ptr);
	mlx_destroy_window(mlx->mlx_ptr, mlx->win_ptr);
	system("leaks miniRT");
	exit(0);
}

int	minirt_exit(t_mlx *mlx)
{	
	free_operations(mlx);
	return(1);
}

int	event_key(int key, t_mlx *mlx)
{
	if (key == 53)
		minirt_exit(mlx);
	return (1);
}