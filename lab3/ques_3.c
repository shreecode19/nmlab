//Write a program to calculate integration using composite Trapezoidal rule.


#include <stdio.h>
#include <math.h>
#define e 2.718

float f(int x){
    return pow(e, -x);
}

float comTrapezoidal(int l, int u, int n){
    float I, h, x = l;

    h = (u - l)/n;
    I = f(x);
    int i;
    for(i = 1; i <= n-1; i++){
        x += h;
        I += (2 * f(x));
    }
    
    I += f(u);
    return (h * I)/2.0;
}

int main(){
    int l,u, n;
    printf("Enter lower bound: "); 
    scanf("%d",&l);
    printf("Enter upper bound: ");
    scanf("%d",&u);
    printf("Enter no of divisions: ");
    scanf("%d",&n);

    printf("\nI: %f",comTrapezoidal(l, u, n));
    return 0;
}
