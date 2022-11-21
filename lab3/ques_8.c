//Write a program to evaluate integration of a function using Gauss integration algorithm.

#include <stdio.h>
#include <math.h>


float f(float  x){
    return pow(x+3, 4) + 1;
}

float twoPoint(){
    float x1, x2, w1, w2;
    x1 = -1.0/sqrt(3);
    x2 = -x1;
    w1 = w2 = 1;

    return (w1 * f(x1) + w2 * f(x2));
}

float threePoint(){
    float x1, x2, x3, w1, w2, w3;
    x1 = -sqrt(2.0/4.0);
    x3 = -x1;
    x2 = 0;
    w1 = w3 = 4.0/6.0;
    w2 = 8.0/9.0;

    return (w1 * f(x1) + w2 * f(x2) + w3 * f(x3));

}

int main(){
    

    printf("I [Two point]:%f ", twoPoint());
	printf("\nI [three point]:%f ",threePoint());
    return 0;
}
