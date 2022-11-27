/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znichola <znichola@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 14:55:20 by znichola          #+#    #+#             */
/*   Updated: 2022/11/27 14:55:20 by znichola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "screenspace.h"

// https://github.com/OneLoneCoder/Javidx9/blob/master/ConsoleGameEngine/SmallerProjects/OneLoneCoder_PanAndZoom.cpp

// Convert coordinates from World Space --> Screen Space
void	world_to_screen(t_app *a, t_fpoint w, t_ipoint *s)
{
	s->x = (int)((w.x - a->offset.x) * a->scale.x);
	s->y = (int)((w.y - a->offset.y) * a->scale.y);
}

// Convert coordinates from Screen Space --> World Space
void	screen_to_world(t_app *a, t_ipoint s, t_fpoint *w)
{
	w->x = (float)(((float)s.x / a->scale.x) + a->offset.x);
	w->y = (float)(((float)s.y / a->scale.y) + a->offset.y);
}

// void	update_offset(t_app *a, t_ipoint s)
// {
// 	a->offset -= ()
// }

int main(int ac, char **av)
{
	t_app	app;
	init_app(&app);

	t_ipoint a;
	a.x = 0;
	a.y = 0;

	t_fpoint b;
	a.x = 0.0;
	a.y = 0.0;

	// app.offset.x = -5;
	// app.offset.y = -5;

	app.scale.x = 2.0;
	app.scale.y = 2.0;

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			a.x = j;
			a.y = i;
			screen_to_world(&app, a, &b);
			pi(a); printf(" -> ");	pf(b); printf("\n");
		}
	}
	
	return 1;
}