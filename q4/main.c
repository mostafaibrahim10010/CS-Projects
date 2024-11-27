#include <stdio.h>
#include <stdlib.h>

int main()
{
    float exchange_rate;
    float Dollar_amount;
    float Yen_amount;
    int precision;

    printf("Enter Today's exchange rate for US dollars to Japanese yen: ");
    scanf("%f",&exchange_rate);


    printf("Enter the amount in U.S. dollars: ");
    scanf("%f", &Dollar_amount);

    printf("Enter the required precision (decimal places): ");
    scanf("%d", &precision);


    Yen_amount = Dollar_amount * exchange_rate;


    printf("Equivalent amount in yen: %.*f\n", precision, Yen_amount);
    return 0;
}
