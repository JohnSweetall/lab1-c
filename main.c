// Author: John Sweetall jts6052@psu.edu
// Collaborator: Yash Patni yjp5077@psu.edu
// Collaborator: Angus Hendrick ajh97@psu.edu
// Collaborator: Angela Bao ymb5072@psu.edu


#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>

int main(void) {

char *Celsius = readline("Enter temperature in celsius: ");

double tempC = atof(Celsius);

printf("%f° in celsius is euqivalent to %f° Fahrenheit.\n", tempC, tempC*9/5 + 32);

return 0;

}