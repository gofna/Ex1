#include<stdio.h>
#include"myMath.h"

int main(){
 
double x;
 printf("please insert a real number for be x : ");
 scanf("%lf",& x);
 int y = (int)(x);

 printf("f(x) = e^x + x^3 -2 =  %0.4lf \n" , sub(add(Exp(y),Pow(x,3)),2));
 printf("f(x) = 3x + 2x^2 = %0.4lf \n", add(mul(3,x),mul(2,Pow(x,2))));
 printf("f(x) = (4x^3)/5 -2x = %0.4lf \n", sub(div(mul(4,Pow(x,3)),5),mul(2,x)));

return 0;
}
