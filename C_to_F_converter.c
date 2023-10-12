#include<stdio.h>
#include<ctype.h>

int main()
{
char unit;
float temp;


    printf("Is your temp in C or F?:\n");
    scanf("%c",&unit);

unit = toupper(unit);

if (unit == 'C')
{
    printf("\nEnter the temp in Celsius:\n");
    scanf("%f", &temp);
    temp = (temp * (9/5)) + 32;
    printf("\nThe temp in Farenheit will be %0.1f", temp);
}
else if (unit == 'F')
{
    printf("\nEnter the temp in F:\n");
    scanf("%f", &temp);
    temp = ((temp - 32) * 5) / 9;
    printf("\nThe temp in Celsius will be %.1f", temp);
}
else
{
    printf("Your unit is invalid");
}
return 0;
}