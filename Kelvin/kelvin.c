#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    // Convert the Celsius temperature from command line argument to Kelvin
    double celsius = atof(argv[1]);
    double kelvin = celsius + 273.15;

    printf("%.2f K\n", kelvin);

    return 0;
}
