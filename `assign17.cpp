/*Input an integer number to consider it as the number of days. Calculate the number of
year(s), month(s), and remaining days from the taken days and then print the results with
appropriate messages. [For example, if the entered number is 400. Considering the
number as 400 days, we have 1 year, 1 month and 5 remaining days.] */

#include<stdio.h>
int main()
{
    int day,month,year;
    printf("Enter days: \n");
    scanf("%d", &day);
    if(day<365)
    {
        day=365-day;
        printf("Need more %d  day(s) to make a year.",day);
    }
    else{
        year=day/ 365;
        day=day%365;
        month=day/ 30;
        day=day%30;
        printf("%d year(s), %d months,%d days",year,month,day);
        
        }
        return 0;
    
}