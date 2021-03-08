#include "stdio.h"
#include "lib.h"


/*
    returns all passed days of the year based on user input
*/

int day_of_the_year(struct DateTime *date_time_pointer) {

    int days = 0;


    //loops through each month that has passed and add the days of the month to variable days
    for(int i = 1; i < date_time_pointer->month; i++)
    {
        days += get_days_for_month(date_time_pointer->year, i);
    }
    return days += date_time_pointer->day;
}

/*
    Get User Input, calls validation of the input
*/

void input_date(struct DateTime *date_time_pointer){

    //User input, if loop goes multiple times due to invalid input it prints an error message

    int i = 0;
    do{
        if(i != 0){
            printf("Please check your Input \n");
        }
        printf("Enter current Year:");
        scanf("%i", &date_time_pointer->year);
        fflush(stdin);

        printf("Enter current Month:");
        scanf("%i", &date_time_pointer->month);
        fflush(stdin);

        printf("Enter current Day:");
        scanf("%i", &date_time_pointer->day);
        fflush(stdin);

        i++;
    }while(!exists_date(date_time_pointer));
}

/*
    Validates if User input is a valid date
*/

int exists_date(struct DateTime *date_time_pointer){

    //check if the month input is in range
    if(date_time_pointer->month <= 0 || date_time_pointer->month > 12){
        return 0;
    }
    // check if day input is valid for the the month
    else if(get_days_for_month(date_time_pointer->year, date_time_pointer->month) <= date_time_pointer->day){
        return 0;
    }
    else{
        return 1;
    }
}

/*
    returns the days of the passed months, calls is_leapyear
*/

int get_days_for_month(int year, int month){
    int february;

    //sets the days of february
    if(is_leapyear(year)){
        february = 29;
    }
    else{
        february = 28;
    }

    int days_per_month[12] = {31,february,31,30,31,30,31,31,30,31,30,31};

    return days_per_month[month - 1];
}

/*
    check if the current year is a leap year returns boolean value
*/
int is_leapyear(int year){

    if(year % 400 == 0 || year % 4 == 0){
        return 1;
    }else{
        return 0;
    }

}
