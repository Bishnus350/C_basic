//looking integer behaviour and float
#include<stdio.h>
int a = 3.14;
float b = 3.14;
int x;
float y;
int main () {
	printf("The integer is %d \n", a);
	x = 2 + 3 + a;
	y = 2 + 3 + b;
	printf("The sum is %d \n", x);
	printf("The float sum is %0.2f \n", y);
	return 0;

}
/*The integer is 3*/ 
/*The sum is 8* because we define x as int*/ 
//If we assing float to integer, it only take integer discarding decimal part
