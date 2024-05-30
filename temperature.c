#include <stdio.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
    char currentUnit;
    char unitToConvert;
    double temp;


   /*  "Celcius C"
    "Fahrenheit F"
    "Rankine R"
    "Kelvin	K" */

    printf("\nWhat is the unit of your current temperature (C for Celcius, F for Fahrenheit, K for Kelvin, R for Rankine):\n");
    scanf("%c", &currentUnit);

    printf("\nWhat is the value of the temperature:");
    scanf("%lf", &temp);

    printf("\nWhat unit do you want to convert to:");
    scanf("%c", &unitToConvert);

}

void convertToCelcius(char unitToConvert)
{
    switch (unitToConvert)
    {
    case 'F':
        /* code */
        break;

    case 'K':
        /* code */
        break;

    case 'R':
        /* code */
        break;

    default:
        break;
    }
}

void convertToFahrrenheit(char unitToConvert)
{
    switch (unitToConvert)
    {
    case 'C':
        /* code */
        break;

    case 'K':
        /* code */
        break;

    case 'R':
        /* code */
        break;

    default:
        break;
    }
}

void convertToRankine(char unitToConvert)
{
    switch (unitToConvert)
    {
    case 'C':
        /* code */
        break;

    case 'F':
        /* code */
        break;

    case 'K':
        /* code */
        break;

    default:
        break;
    }
}

void convertToKelvin(char unitToConvert)
{
    switch (unitToConvert)
    {
    case 'C':
        /* code */
        break;

    case 'F':
        /* code */
        break;

    case 'R':
        /* code */
        break;

    default:
        break;
    }
}
