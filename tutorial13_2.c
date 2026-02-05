//Find the even of even numbers
#include<stdio.h>

int main (void) {
        //int even;
	for (int i = 1; i<=20; i = i + 1)
	{
		if (i ==0){
			printf("%d is neither even nor odd", i); 
		}
		if ( i %2 ==  0){
			printf("%d is even. \n", i);
		}
		else{
			
			printf("%d is odd. \n", i);
		}
	}

	return 0;

	
}
