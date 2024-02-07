/*
Write a C program to take input of temprature as celcius and print its farenheit value
*/
#include <stdio.h>
int main(){
    float temp;
    printf("Enter the temprature in celcius");
    scanf("%f",&temp);
    float farenheit = (1.8*temp)+32;
    printf("%f is the temprature in farenheit",farenheit);
    printf(sizeof ("2"));
    return 0;
}

