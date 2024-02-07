/*
Find if the given year is a leap year or not
Condition for leap year is - To be a leap year, the year number must be divisible by four – except for end-of-century years, which must be divisible by 400. This means that the year 2000 was a leap year, although 1900 was not. 2024, 2028, 2032 and 2036 are all leap years.
*/
#include <stdio.h>
int main(){
    int year;
    printf("Enter the year you wnat to check : ");
    scanf("%d",&year);
    if(year%4==0 && (year%100 != 0 || year%400 == 0)){   //it shd be divisible by 4 and either it shd be divisible by 400 or not divisible by 100 to be a leap year bcz every 100th year cant bea leap year unless it is the 400th year . check notes for detailed concept
        printf("%d is a leap year",year);
    }
    else{
        printf("%d is not a leap year",year);
    }
}