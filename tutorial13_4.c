//Find the even of even numbers
#include<stdio.h>

int main (void) {
	for (int i = 2; i<=20; i = i + 1){
		int is_prime = 1;//checking prime number like True in Pyhton
		for(int j = 2; j<i;j = j + 1){
			if (i%j==0){
				is_prime = 0;
				break;
			}
		}
		if (is_prime ==1){
			printf("%d is a prime \n", i);

		} else {
			printf("%d is not a prime \n", i);

		}
	}

	
		return 0;	

}
//7 is prime, you must try dividing it by 2, 3, 4, 5, and 6
