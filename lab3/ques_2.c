//Write a program to calculate integration using Trapezoidal rule

#include <stdio.h>
#include <math.h>
#define e 2.718

float f(int x){
    return pow(e, -x);
}

float trapeziodal(int l, int u){
    return (u - l) * (f(l) + f(u)) / 2.0;
}

int main(){
    int l, u;

    printf("Enter the lower and upper bound: ");
    scanf("%d",&l);
    scanf("%d",&u);

    printf("I: %f",trapeziodal(l, u));
    return 0;
}
