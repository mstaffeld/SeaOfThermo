#include <stdio.h>

#include "Thermostat.h"

int shouldFurnaceTurnOn(int temperature)
{
	if(temperature < 60)
	{
		return 1;
	}
	
	return 0;
}

int shouldFurnaceTurnOff(int temperature)
{
	if(temperature >= 70)
	{
		return 1;
	}

	return 0;
}