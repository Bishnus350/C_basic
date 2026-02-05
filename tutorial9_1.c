//use of if else statement//
#include<stdio.h>
int x,y;
int main(void){
	printf("Print the value x: ");
	scanf("%d", &x);
	printf("Print the value y: ");
	scanf("%d", &y);
	/*Test the print result*/
	if (x == y)
		printf("They X %d Y %d both are equall. \n", x,y);
        else if (x > y)
		printf("X %d is greater than Y %d. \n", x,y);
	else
		printf("X %d is less than Y %d. \n", x,y);
	return 0;

}
