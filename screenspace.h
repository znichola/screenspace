/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   screenspace.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znichola <znichola@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 14:57:56 by znichola          #+#    #+#             */
/*   Updated: 2022/11/27 14:57:56 by znichola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCREENSPACE_H
# define SCREENSPACE_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>

typedef struct s_screen_point
{
	int	x;
	int	y;
} t_screen_point;

typedef struct s_world_point
{
	double	x;
	double	y;
} t_world_point;

#endif