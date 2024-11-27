#include <stdio.h>
#include <stdlib.h>

int main()
{

    int personDay, personMonth, personYear; // Person's Birthdate

    int todayDay, todayMonth, todayYear; // Today's Date

    int days, months, years; // Age

    int extraDays, leapDays; // Extradays


    printf("Enter Your Birth Date (MM / DD / YYYY): ");
    scanf("%d \t %d \t %d", &personMonth, &personDay, &personYear);
    printf("Enter Today's Date (MM / DD / YYYY): ");
    scanf("%d %d %d", &todayMonth, &todayDay, &todayYear);


    // leap
    for (int i = personYear; i <= todayYear; i++){
            if (i % 4 == 0){
                leapDays++;
            }
    }

    if (todayMonth == 1 || todayMonth == 2){
        leapDays--;
    }

    extraDays = (years * 5) + leapDays; // + 7 for 31 days and -2 for feb = 5

    years = todayYear - personYear;

    months = todayMonth - personMonth;

    days = (todayDay - personDay) + extraDays;

    // - D

    if (days < 0){
        days = abs(days);
    }

    // - M

    if (months < 0){
        months = abs(months);
    }

    days = (todayDay - personDay) + extraDays;

    // increment Days & Days


    if (days > 30){

        months++;
        days = days - 30;

    }

    if (months > 12){

        years++;

        months = months - 12;

    }



    printf("%d Years, %d Months, %d Days", years, months, days);



    return 0;
}
