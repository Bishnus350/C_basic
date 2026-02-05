//MACROS vs constant
#include <stdio.h>
#define RATE 20 //define Macros
const int principle =20000;
const int time = 5 ;
int interest;
int main () {
	interest = ( principle * time * RATE)/100 ;
	printf("The interest is %d \n ", interest);
	return 0;

}
