/*Write a program to solve non-linear equation using Newton’s method. Your program should
read an initial guess from keyboard and display the followings if the solution is obtained:
a. Estimated root of the equation
b. Functional value at calculated root
c. Required number of iterations*/

#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<stdlib.h>

#define f(x) x*x*x - 2*x - 5
#define g(x) 3*x*x - 2

int main(){
	float x0, x1, f0, g0, error, e;
	int step = 1;
	
	printf("Enter a initial guess: ");
	scanf("%f", &x0);
	
	printf("Enter error: ");
	scanf("%f", &e);
	
	printf("Steps\t\t x0\t\t f(x0)\t\t f'(x0)\t\t x1\t\t Error\n");
	do{
		g0 = g(x0);
		f0 = f(x0);
	if(g0 == 0.0){
		printf("Math Error because denominator is 0");
		exit(0);
	}
	//Calculating x1 and error
	x1 = x0 - f0/g0;
	error = (x1 - x0)/x1;
	
	printf("%d\t\t %f\t %f\t %f\t %f\t %f\n",step,x0,f0,g0,x1,error);
	x0 = x1;
	
	step = step + 1;
	}
	while(fabs(error)>e);
	printf("\troot = %f",x1);
	return 0;
}
