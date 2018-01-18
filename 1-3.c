#include <stdio.h>
main()
{
	float fahr, celsius;
	float lower, upper, step;

	lower = 0.0;
	upper = 300.0;
	step = 20.0;

	fahr = lower;
	printf("Fahrenheit - Celsius Table \n");
	while (fahr <= upper) {
		celsius = (5.0 / 9.0) * (fahr - 32.0);
		printf("%3.0f %6.1f \n", fahr, celsius);
		fahr = fahr + step;
	}
}