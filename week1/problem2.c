/*
Read a input a and check if its divisible by 4 and 6
*/
#include <stdio.h>
int main(){
    int a;
    printf("Enter a number a : ");
    scanf("%d",&a);
    if(a%6 == 0 && a%4 == 0){
        printf("a is divisible by 6 and 4 ");
    }
    else if (a%6 == 0){
        printf("a is divisible by 6");
    }
    else if (a%4 == 0){
        printf("a is divisible by 4");
    }
    else{
        printf("a is not divisible by 6 and 4");
    }
}