#include <stdio.h>
#include <stdlib.h>
#include <check.h>
#include "ThermostatTests.h"
#include "../src/Thermostat.h"

START_TEST(ShouldTurnFurnaceOnIfBelowLower)
{
	int turnOn = shouldFurnaceTurnOn(49);

	ck_assert_int_eq(1, turnOn);
}
END_TEST

START_TEST(ShouldTurnFurnaceOnDependency)
{
	int turnOn = shouldFurnaceTurnOn(49);

	
	ck_assert_int_eq(1, turnOn);
}
END_TEST

START_TEST(SouldTurnFurnaceOffIfAboveUpper)
{
	int upper = 70;
	int turnOff = shouldFurnaceTurnOff(upper);
	ck_assert_int_eq(1, turnOff);
}
END_TEST

Suite* thermostatSuite(void)
{
	Suite* suite = suite_create("Thermostat Tests");
	TCase* thermostatCase = tcase_create("Thermostat Tests");
	tcase_add_test(thermostatCase, ShouldTurnFurnaceOnIfBelowLower);
	tcase_add_test(thermostatCase, SouldTurnFurnaceOffIfAboveUpper);
	tcase_add_test(thermostatCase, ShouldTurnFurnaceOnDependency);

	suite_add_tcase(suite, thermostatCase);
	
	return suite;
}

