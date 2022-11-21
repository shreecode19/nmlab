//Write a program to evaluate integration of a function using Romberg integration formula.

#include <stdio.h>
#include <math.h>
#define e 2.718

float f(float x){
    return pow(e, -x/2.0);
}

float comTrapezoidal(int l, int u, int n){
    float I, h, x = l,i;

    h = (u - l)/pow(2, n);
    I = f(x);
    for(i = 1; i <= pow(2, n) - 1; i++){
        x += h;
        I += (2 * f(x));
    }    
    I += f(u);
    return (h * I)/2.0;
}

float romberg(int row, int col, int l, int u){
    float val;
    if(col == 0){
        val = comTrapezoidal(l, u, row);
    }
    else{
        val =  (pow(4, col) * romberg(row, col -1 , l, u) - romberg(row -1, col -1, l, u))/(pow(4, col) - 1);
    }
    return val;
}

int main(){

    int l, u, row, col;
    printf("Enter lower bound: ");
  	scanf("%d",&l);
    printf("Enter upper bound: ");
    scanf("%d",&u);
    printf("Enter row and column ");
    scanf("%d %d",&row,&col);

    printf("R(%d, %d)= %f ",row,col,round(romberg(row, col, l, u)));
    return 0;
}
