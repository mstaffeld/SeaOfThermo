#include <stdlib.h>
#include <check.h>

#include "ThermostatTests.h"

int main()
{
	Suite* suite1 = thermostatSuite();
	SRunner *suiteRunner = srunner_create(suite1);
	
	srunner_run_all(suiteRunner, CK_NORMAL);

	int failures;
	failures = srunner_ntests_failed(suiteRunner);

	srunner_free(suiteRunner);

	if(failures == 0)
		return EXIT_SUCCESS;

	return EXIT_FAILURE;
}
