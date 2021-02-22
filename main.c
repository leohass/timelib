/*
Author: Leonardo Hasslöver
Project: Tag des Jahres
Date 19.01.2021
*/

#include <stdio.h>
#include <stdlib.h>


int main()
{
    int year = 0;
    int month = 0;
    int day = 0;
    int days_february = 28;

    int sum_days = 0;

    // user input for the year
    printf("Geben Sie das Jahr an: ");
    scanf("%i", &year);
    fflush(stdin);

    // validate if the year is a leap year
    if(year % 4 == 0)
    {
        days_february = 29;
    }

    int days_per_month[12] = {31,days_february,31,30,31,30,31,31,30,31,30,31};

    // get user input for month and day
    do{
        printf("Geben Sie den Monat an: ");
        scanf("%i", &month);
        fflush(stdin);
    }while(month > 12);

    do{
        printf("Geben Sie den Tag an: ");
        scanf("%i", &day);
        fflush(stdin);
    }while(day > 31);

    //if selected month is february check if the input day matches
    if(month == 2){
        if(day > days_february){
            printf("Geben Sie den Tag an: ");
            scanf("%i", &day);
            fflush(stdin);
        }
    }

    // calculate the the days of the current year and the sum of the days until the current date
    for(int i = month - 2; i >= 0; i--)
    {
        sum_days += days_per_month[i];
    }
    sum_days += day;

    printf("Das Jahr hat bereits %i Tage", sum_days);
    return 0;
}
