//Write a program to evaluate double integration of a function using Trapezoidal rule. 

#include <stdio.h>
#include <math.h>


float f(int x, int y){
    return pow(x, y);
}

float doubleINt(int xl, int xu, int yl, int yu){
    return (yu - yl) * (xu - xl) * (f(xl, yl) + f(xl, yu) + f(xu, yu) + f(xu, yl))/4.0;  //formula..
}

int main(){
    int xl, xu, yl, yu;
    printf("Enter x limits (xl, xu): ");
    scanf("%d %d",&xl,&xu);
    printf("Enter y limits (yl, yu): ");
   	scanf("%d %d",&yl,&yu);

    printf("I= %f",doubleINt(xl, xu, yl, yu));
    return 0;
}
