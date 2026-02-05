//use for loop to count 1 to 20 and sum all the numbers upto 20
#include<stdio.h>
//int sum (int a)
int main (void){
        int add = 0;
	for (int i =1; i <20; i = i + 1){
		add = add + i;
		printf("The value are: %d \n", i);}
		printf("The add  are: %d \n", add);
	
	int sum = 0;//initialize the sum variable with 0
	//int z;
	for (int j = 1; j <20; j = j + 1){
		sum = sum + j;
                                           
	}
	printf("The sum is : %d\n ", sum);

		return 0;
}

