/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key_instructions.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablomar <pablomar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 14:17:03 by pablomar          #+#    #+#             */
/*   Updated: 2020/02/13 14:17:20 by pablomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/miniRT.h"

int	minirt_exit(int key, void *param)
{
	if (key == '5')
		exit(0);
	return (0);	
}