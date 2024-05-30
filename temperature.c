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

void convertToCelcius(char unitToConvert, double temp)
{
    double celciusValue;
    switch (unitToConvert)
    {
    case 'F':
        celciusValue = (temp - 32) * (5/9);
        printf("Celcius value: %0.3lf", celciusValue);
        break;

    case 'K':
        celciusValue = (temp - 273.15);
        printf("Celcius value: %0.3lf", celciusValue);
        break;

    case 'R':
        celciusValue = (temp - 491.67) * (5 / 9);
        printf("Celcius value: %0.3lf", celciusValue);
        break;

    default:
    printf("Invalid temperature code entered");
        break;
    }
}

void convertToFahrrenheit(char unitToConvert, double temp)
{
    double fahrenheitValue;
    switch (unitToConvert)
    {
    case 'C':
        fahrenheitValue = (temp * (9/5) + 32);
        printf("Fahrenheit value: %0.3lf", fahrenheitValue);
        break;

    case 'K':
        fahrenheitValue = (temp * (9/5) - 459.67);
        printf("Fahrenheit value: %0.3lf", fahrenheitValue);
        break;

    case 'R':
        fahrenheitValue = (temp - 459.67);
        printf("Fahrenheit value: %0.3lf", fahrenheitValue);
        break;

    default:
        printf("Invalid temperature code entered");
        break;
    }
}

void convertToRankine(char unitToConvert, double temp)
{
    double rankineValue;
    switch (unitToConvert)
    {
    case 'C':
        rankineValue = (temp + 273.15) * (9/5);
        printf("Rankine value: %0.3lf", rankineValue);
        break;

    case 'F':
        rankineValue = (temp + 459.67);
        printf("Rankine value: %0.3lf", rankineValue);
        break;

    case 'K':
        rankineValue = (temp * (9/5));
        printf("Rankine value: %0.3lf", rankineValue);
        break;

    default:
        printf("Invalid temperature code entered");
        break;
    }
}

void convertToKelvin(char unitToConvert, double temp)
{
    double kelvinValue;
    switch (unitToConvert)
    {
    case 'C':
        kelvinValue = (temp + 273.15);
        printf("Kelvin value: %0.3lf", kelvinValue);
        break;

    case 'F':
        kelvinValue = (temp + 459.67) * (5/9);
        printf("Kelvin value: %0.3lf", kelvinValue);
        break;

    case 'R':
        kelvinValue = (temp * (5 / 9));
        printf("Kelvin value: %0.3lf", kelvinValue);
        break;

    default:
        printf("Invalid temperature code entered");
        break;
    }
}
