/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pixel_drawer.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablomar <pablomar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 12:34:35 by pablomar          #+#    #+#             */
/*   Updated: 2020/09/18 17:07:11 by pablomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/miniRT.h"
#include "../includes/scene.h"

/*
**This loop asign pixels to background
*/

void            pixel_drawer(t_mlx *mlx, int x, int y, int color)
{
    char    *dst;

    dst = mlx->data + (y * mlx->size_l + x * (mlx->bpp / 8));
    *(unsigned int*)dst = color;
}

/*
** This is a temporal function for experimenting with the mlx
*/
void    render(t_scene *scene, t_mlx *mlx, t_sphere sphere)
{
    unsigned int	count_x;
    unsigned int	count_y;

    count_y = -1;
    while (++count_y < scene->y_res)
        {
            count_x = -1;
            while (++count_x < scene->x_res)
            {
                pixel_drawer(mlx,count_x,count_y,scene->rgb_color);
            }
        }
}