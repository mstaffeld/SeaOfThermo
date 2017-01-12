#include <stdio.h>

#include "Furnace.h"

// GPIO PIN for Relay On
static const int FURNACE_RELAY_PIN = 5;

void turnFurnaceOn()
{
	// Raise Pin
	printf("Raising pin: %d\n", FURNACE_RELAY_PIN);
}