/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key_instructions.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablomar <pablomar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 14:17:03 by pablomar          #+#    #+#             */
/*   Updated: 2020/02/13 15:55:06 by pablomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/miniRT.h"

int	minirt_exit(int key, t_scene *scene, t_mlx *mlx)
{
	if (key == '5')
    {
        final_frees(mlx, scene);
        system("leaks miniRT");
		exit(0);
    }
	return (0);	
}