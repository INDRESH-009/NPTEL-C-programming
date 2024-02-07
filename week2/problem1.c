// Input an integer and read it till -1 is reached . Then print the sum of all read numers excluding the negatuve number using while loop  only

#include <stdio.h>
int main(){
    int a;
    scanf("%d" ,&a);
    int i = a;
    while(i>=-1){
        printf("%d\n" ,i);
        i--;
        
    }
    int sum =0;
    while(i>-1){
        sum = sum + i;
        i--;
    }
    printf("%d",sum);
    return 0;
        
   
}
 
