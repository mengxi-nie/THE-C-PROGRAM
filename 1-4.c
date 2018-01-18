#include <stdio.h>
main()
{
	float fahr, celsius;
	float lower, upper, step;

	lower = -150.0;
	upper = 150.0;
	step = 20.0;

	celsius = lower;
	printf("Celsius - FahrenheitTable \n");
	while (celsius <= upper) {
		fahr= 9.0 * celsius / 5.0 + 32.0;
		printf("%3.0f %6.1f \n", celsius, fahr);
		celsius = celsius + step;
	}
}