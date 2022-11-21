////Write a program to calculate integration using Simpson’s 1/3 rule.
#include <stdio.h>
#include <math.h>
#define e 2.718

float f(int x){
    return pow(e, -x);
}

float simpson(int l, int u){
    float h = (u -l)/2.0;
    return h * (f(l) + 4 * f(l + h) + f(u))/3.0;
}

int main(){
    int l, u;

    printf("Enter lower bound: ");
    scanf("%d",&l);
    printf("Enter upper bound: ");
 	scanf("%d",&u);
 	
    printf("\nI:%f",simpson(l, u));

    return 0;
}
