#include <stdio.h>
#include <stdlib.h>
#include <check.h>
#include "FurnaceTests.h"
#include "../src/Furnace.h"

Suite* furnaceSuite(void)
{
	Suite* suite = suite_create("Furnace Tests");
	TCase* thermostatCase = tcase_create("Furnace Tests");
	//tcase_add_test(thermostatCase, ShouldTurnFurnaceOnIfBelowLower);


	suite_add_tcase(suite, thermostatCase);
	
	return suite;
}

