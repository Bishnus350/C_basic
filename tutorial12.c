//Find the factorial of number <5
#include<stdio.h>
//Let's assume a number called 'a', we want to find factorial 
int factorial (int a);

int main (void) {
	int x; //local variable
	int z;
	printf("Please enter the number:");
	scanf("%d", &x);
	z=factorial(x);
	if (x >=5 || x <1){
		printf("Warning : We only do factorial of number less than 5 \n");
	}
	else {
		printf("We can procees \n");}

        
	printf("The factorial value is%d \n", z);
	return 0;
}
int factorial (int a){
	if (a ==1 ){
		return 1;}
	else {
		a = a * factorial(a-1);
		return a;
	}
}
