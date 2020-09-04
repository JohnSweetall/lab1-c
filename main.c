#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>

int main(void) {

double tempC;
double tempF;

char * Celsius = readline("Enter temperature in celsius: ");

tempC = atof(Celsius);
tempF = ((tempC*9/5) + 32);

printf("%f° in celsius is euqivalent to %f° Fahrenheit.\n", tempC, tempF);

return 0;

}