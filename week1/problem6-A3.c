// Problem Statement

// Given the coefficients of a pair of linear equations,

// 𝑎1𝑥+𝑏1𝑦=𝑐1
//𝑎2𝑥+𝑏2𝑦=𝑐2


// Find the solutions to 𝑥
//  and 𝑦

// Input

// Input consists two lines.
// The first line contains coefficients of first equation,  𝑎1𝑏1𝑐1
//   in that order
// The second line contains coefficients of second equation,  𝑎2𝑏2𝑐2
//  in that order

// Output

// The solutions to x and y.

// Note : You can assume that both x and y will always be integers.
// You can also assume that the solution is unique.
#include <stdio.h>
int main(){
    int a1,b1,c1,a2,b2,c2;
    scanf("%d%d%d%d%d%d",&a1,&b1,&c1,&a2,&b2,&c2);
    int det = a1*b2 - a2*b1;
    int x = (b2*c1 - b1*c2)/det;
    int y = (a1*c2 - a2*c1)/det;
    printf("%d %d",x,y);
    return 0;
}