#include<stdio.h>
int start;
int end;
int i;
int main (void){
	printf("Hello, World! \n");
	printf("Counting .... \n");
	printf("The starting integer is \n");
	scanf("%d", &start);
	printf("The termination integer is\n");
	scanf("%d", &end);//& give memory address
        //int i; can declare here or in the loop.
		
	for (int  i= start; i < end; i = i + 1)
		printf("\n counting is: %d \n ",i);//%d is like formatting string
        printf("Counting Done\n ");
	return 0;

}


