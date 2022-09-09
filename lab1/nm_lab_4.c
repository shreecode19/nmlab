/*Write a program to solve non-linear equation using Fixed Point Iteration method. Your
program should read an initial guess from keyboard and display the followings if the solution is
obtained:
a. Estimated root of the equation
b. Functional value at calculated root
c. Required number of iterations
*/

#include<stdio.h>
#include<conio.h>
#include<math.h>


#define   f(x)   cos(x)-3*x+1

#define   g(x)   (1+cos(x))/3

int main()
{
	 int step=1;
	 float x0, x1, e, error;

	 printf("Enter initial guess: ");
	 scanf("%f", &x0);
	 printf("Enter tolerable error: ");
	 scanf("%f", &e);

	 /* Implementing Fixed Point Iteration */
	 printf("\nStep\tx0\t\tf(x0)\t\tx1\t\tf(x1)\t\terror\n");
	 do
	 {
		  x1 = g(x0);
		  error = (x1 - x0)/x1;		  
		  printf("%d\t%f\t%f\t%f\t%f\t%f\n",step, x0, f(x0), x1, f(x1), error);
		
		  step = step + 1;
		
		  
		  x0 = x1;

		  
	 }while( fabs(error) > e);
	 
	 printf("\nRoot is %f", x1);
	 return(0);
}
Footer

