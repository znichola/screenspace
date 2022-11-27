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
void WorldToScreen(float fWorldX, float fWorldY, int &nScreenX, int &nScreenY)
	{
		nScreenX = (int)((fWorldX - fOffsetX) * fScaleX);
		nScreenY = (int)((fWorldY - fOffsetY) * fScaleY);
	}

// Convert coordinates from Screen Space --> World Space
void ScreenToWorld(int nScreenX, int nScreenY, float &fWorldX, float &fWorldY)
{
	fWorldX = ((float)nScreenX / fScaleX) + fOffsetX;
	fWorldY = ((float)nScreenY / fScaleY) + fOffsetY;
}

int main(int ac, char **av)
{
	printf("test\n");
	return 1;
}