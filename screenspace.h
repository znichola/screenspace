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

typedef struct	s_fpoint
{
	double	x;
	double	y;
}				t_fpoint;

typedef struct	s_ipoint
{
	int	x;
	int	y;
}				t_ipoint;

typedef struct	s_app
{
	t_fpoint	scale;
	t_fpoint	offset;
}				t_app;

void	init_app(t_app *a);
void	pi(t_ipoint p);
void	pf(t_fpoint p);


#endif