#include<stdio.h>
int main (void){
	printf("Hello, World! \n");
	printf("Counting .... \n");
        //int 1; can declare here or in the loop.	
	for (int  i= 0; i < 5; i = i + 1)
		printf("\n counting is: %d \n ",i);//%d is like formatting string
        printf("Counting Done\n ");
	return 0;

}


