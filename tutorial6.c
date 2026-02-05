//Sum of 2 numbers using argument 
#include<stdio.h>
#include<stdlib.h>
int a;
int b;
int c;
int main (int argc, char *argv[]){
	if (argc < 3){
		printf("We need at least 2 arguments");
		return 1;
	}
        a = atoi(argv[1]);
	b = atoi(argv[2]);
        c = a + b;
	printf("The sum is : %d \n", c);
	return c;
}
