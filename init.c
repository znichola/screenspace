/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znichola <znichola@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 17:11:10 by znichola          #+#    #+#             */
/*   Updated: 2022/11/27 17:11:10 by znichola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "screenspace.h"

void	init_app(t_app *a)
{
	a->offset.x = 0.0;
	a->offset.y = 0.0;
	a->scale.x = 1;
	a->scale.y = 1;
}

void	pi(t_ipoint p)
{
	printf("(%d, %d)", p.x, p.y);
}

void	pf(t_fpoint p)
{
	printf("(%.1f, %.1f)", p.x, p.y);
}