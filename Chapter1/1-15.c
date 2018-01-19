#include <stdio.h>

int Temp_trans (float fahr, float celsius);

int main()
{
	float fahr, celsius;
	
	fahr = celsius = 0.0;
	Temp_trans(fahr, celsius);
	
	return 0;
}

int Temp_trans(float fahr, float celsius){
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
	return 0;

}