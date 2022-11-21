//Write a program to evaluate integration of a function using Simpson’s 3/8 rule.

#include <stdio.h>
#include <math.h>
#define e 2.718

float f(int x){
    return pow(e, -x);
}

float simpson(int l, int u){
    float h = (u -l)/3.0;
    return 3 * h * (f(l) + 3* f(l + h) + 3 * f(l + 2*h) + f(u))/8.0;
}

int main(){
    int l, u;

    printf("Enter lower bound: ");
    scanf("%d",&l);
    printf("Enter upper bound: ");
    scanf("%d",&u);

    printf("\nI: %f",simpson(l, u));

    return 0;
}
