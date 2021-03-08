/*
Author: Leonardo Hasslöver
Project: Tag des Jahres
Date 08.03.2021
*/

#include <stdio.h>
#include <stdlib.h>
#include "lib.h"

int main(){

    //initializes struct
    struct DateTime date_time;

    date_time.year = 0;
    date_time.month = 0;
    date_time.day = 0;

    //calls the input date function with the pointer for the struct
    input_date(&date_time);

    // calls the day of the year function and prints out the passed days
    printf("%i", day_of_the_year(&date_time));
}



