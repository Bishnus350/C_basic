//Find the even of even numbers
#include<stdio.h>

int main (void) {
        int z;
	for (int i = 1; i<=20; i = i + 1){
		z = i%2;
		if (z==0){
			printf ("%d is even \n", i);
		}
	//	else {
	//	printf("%d is odd\n", i);
	//	}
	}
	return 0;	
}
