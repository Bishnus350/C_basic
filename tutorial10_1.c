//Making sum function 
#include <stdio.h>
long sum (long x, long y); //Semicolon becasue i want compiler to see this function 
long mult (long x, long y);		   
long a;
long b;
int main () {
	printf("The first number is: ");
	scanf("%ld",&a);
	printf("The second number is: ");
	scanf("%ld",&b);
	long answer;
	answer = sum (a, b);
	long ans_mult;
	ans_mult = mult (a, b);
	printf("The sum  is: %ld \n ", answer);
	printf("The mult  is: %ld \n ", ans_mult);
	return 0;
}
long sum (long x, long y){
	long add;
	add = a + b;
	return add;
}
long mult  (long x, long y){
	long mult_res;
	mult_res = a *  b;
	return mult_res;
}
