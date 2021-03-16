/* ----------------------------------------------------------------------- */
/*                         INSERT YOUR NAME HERE                           */
/* ----------------------------------------------------------------------- */

#ifndef LIFEINDICATORS_H
#define LIFEINDICATORS_H

#include <iostream>

typedef unsigned short ushort;


void updateLifeIndicatorPlayer1(ushort* lifeIndicatorP1, ushort damage)
{
	
	// TO DO: Insert your code here
	int remaining = 10;
	for (int i = 0; i < 10; i++)
	{
		if (*(lifeIndicatorP1 + i) == 0) remaining--;
	}
	if ((remaining < damage) || (remaining == 0))
	{
		for (int i = 0; i < 10; i++)
		{
			*(lifeIndicatorP1 + i) = 0;
		}
	}
	else 
	{
		for (int i = 0; i < damage; i++)
		{
			*(lifeIndicatorP1 + (10 - remaining) + i) = 0;
		}
	}
	
	remaining = 10;
}


void updateLifeIndicatorPlayer2(ushort* lifeIndicatorP2, ushort damage)
{
	
	// TO DO: Insert your code here
	int remaining = 10;
	for (int i = 0; i < 10; i++)
	{
		if (*(lifeIndicatorP2 + i) == 0) remaining--;
	}
	if ((remaining < damage) || (remaining == 0))
	{
		for (int i = 0; i < 10; i++)
		{
			*(lifeIndicatorP2 + i) = 0;
		}
	}
	else
	{
		for (int i = 0; i < damage; i++)
		{
			*(lifeIndicatorP2 + 9 - ( 10 - remaining) - i ) = 0;
		}
	}
	remaining = 10;
}

#endif