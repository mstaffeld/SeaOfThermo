#include <stdio.h>

#include "Thermostat.h"
#include "Furnace.h"

// Read from environment variables or .ini?
static const int LOWER_TEMP_F = 60;
static const int UPPER_TEMP_F = 70;

int shouldFurnaceTurnOn(int temperature)
{
	if(temperature < LOWER_TEMP_F)
	{
		turnFurnaceOn();
		return 1;
	}
	
	return 0;
}

int shouldFurnaceTurnOff(int temperature)
{
	if(temperature >= UPPER_TEMP_F)
	{
		return 1;
	}

	return 0;
}