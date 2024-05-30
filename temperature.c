#include <stdio.h>
#include <stdio.h>

void convertToCelcius(char currentUnit, double temp)
{
    printf("\n%c, %lf\n", currentUnit, temp);
    double celciusValue;
    switch (currentUnit)
    {
    case 'F':
        celciusValue = (temp - 32) * (5 / 9);
        printf("\nCelcius value: %0.3lf\n", celciusValue);
        break;

    case 'K':
        celciusValue = (temp - 273.15);
        printf("\nCelcius value: %0.3lf\n", celciusValue);
        break;

    case 'R':
        celciusValue = (temp - 491.67) * (5 / 9);
        printf("\nCelcius value: %0.3lf\n", celciusValue);
        break;

    default:
        printf("Invalid temperature code entered");
        break;
    }
}

void convertToFahrrenheit(char currentUnit, double temp)
{
    printf("%c, %lf", currentUnit, temp);
    double fahrenheitValue;
    switch (currentUnit)
    {
    case 'C':
        fahrenheitValue = (temp * (9.0 / 5.0)) + 32;
        printf("\nFahrenheit value: %0.3lf\n", fahrenheitValue);
        break;

    case 'K':
        fahrenheitValue = (temp * (9.0 / 5.0)) - 459.67;
        printf("\nFahrenheit value: %0.3lf\n", fahrenheitValue);
        break;

    case 'R':
        fahrenheitValue = (temp - 459.67);
        printf("\nFahrenheit value: %0.3lf\n", fahrenheitValue);
        break;

    default:
        printf("Invalid temperature code entered");
        break;
    }
}

void convertToRankine(char currentUnit, double temp)
{
    printf("\n%c, %lf\n", currentUnit, temp);
    double rankineValue;
    switch (currentUnit)
    {
    case 'C':
        rankineValue = (temp + 273.15) * (9.0 / 5.0);
        printf("\nRankine value: %0.3lf\n", rankineValue);
        break;

    case 'F':
        rankineValue = (temp + 459.67);
        printf("\nRankine value: %0.3lf\n", rankineValue);
        break;

    case 'K':
        rankineValue = (temp * (9.0 / 5.0));
        printf("\nRankine value: %0.3lf\n", rankineValue);
        break;

    default:
        printf("Invalid temperature code entered");
        break;
    }
}

void convertToKelvin(char currentUnit, double temp)
{
    printf("\n%c, %lf\n", currentUnit, temp);
    double kelvinValue;
    switch (currentUnit)
    {
    case 'C':
        kelvinValue = (temp + 273.15);
        printf("\nKelvin value: %0.3lf\n", kelvinValue);
        break;

    case 'F':
        kelvinValue = (temp + 459.67) * (5.0 / 9.0);
        printf("\nKelvin value: %0.3lf\n", kelvinValue);
        break;

    case 'R':
        kelvinValue = (temp * (5.0 / 9.0));
        printf("\nKelvin value: %0.3lf\n", kelvinValue);
        break;

    default:
        printf("Invalid temperature code entered");
        break;
    }
}

void mainConverter(char unitToConvert, double temp, char currentUnit)
{
    printf("\n%c\n", unitToConvert);
    switch (unitToConvert)
    {
    case 'C':
        convertToCelcius(currentUnit, temp);
        break;

    case 'F':
        convertToFahrrenheit(currentUnit, temp);
        break;

    case 'K':
        convertToKelvin(currentUnit, temp);
        break;

    case 'R':
        convertToRankine(currentUnit, temp);
        break;
    default:
        break;
    }
}

int main()
{
    char currentUnit;
    char unitToConvert;
    double temp;


   /*  "Celcius C"
    "Fahrenheit F"
    "Rankine R"
    "Kelvin	K" */

    printf("\nWhat is the unit of your current temperature (C for Celcius, F for Fahrenheit, K for Kelvin, R for Rankine):\n");
    scanf(" %c", &currentUnit);
    printf("Current temperaure unit: %c\n", currentUnit);

    printf("\nWhat is the value of the temperature: \n");
    scanf("%lf", &temp);
    printf("Current temperaure: %lf\n", temp);

    printf("\nWhat unit do you want to convert to: \n");
    scanf(" %c", &unitToConvert);
    printf("Unit of temperature to be convered to: %c\n", unitToConvert);

    mainConverter(unitToConvert, temp, currentUnit);

}
