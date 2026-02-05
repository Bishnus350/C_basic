/* Use of Function in C */
#include <stdio.h>
//declare a function 
long cube (long x); //Function is long and parameters are also long 

int main(){
	long x;
	long answer;
	printf("Enter the number: ");
	scanf("%ld", &x);
	answer = cube(x);
	printf("The answer is %ld \n ", answer);
	return 0;

}
long cube (long x){
	long cube_long;
	cube_long = x * x * x;
	return cube_long;
}
