#include <stdio.h>
#include <stdlib.h>
#include <check.h>
#include "ThermostatTests.h"
#include "../src/Thermostat.h"


START_TEST(ShouldTurnOnFurnaceIfBelow60F)
{
	ck_assert_int_eq(0, 1);

}
END_TEST

Suite* thermostatSuite(void)
{
	Suite* suite = suite_create("Thermostat Tests");
	TCase* thermostatCase = tcase_create("Thermostat Tests");
	tcase_add_test(thermostatCase, ShouldTurnOnFurnaceIfBelow60F);

	suite_add_tcase(suite, thermostatCase);
	
	return suite;
}

