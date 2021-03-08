

// Prototype - struct

struct DateTime{
    int year;
    int month;
    int day;
};
/*
    Prototype - Calculate The Days of The year until time stamp of User Input

*/
int day_of_the_year(struct DateTime *date_time_pointer);

/*
    Prototype - Get time stamp by User Input
*/

void input_date(struct DateTime *date_time_pointer);

/*
    Prototype - check if the time stamp is a Valid Date
*/

int exists_date(struct DateTime *date_time_pointer);

/*
    Prototype - get the days for each month
*/

int get_days_for_month(int year, int month);

/*
    Prototype - check if current year is a leap year
*/
int is_leapyear(int year);
