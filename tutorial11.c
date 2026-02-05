//Multiple return statement compare 2 number 
#include<stdio.h>
int compare (int a , int b);
int main (void) {
        int x, y; //local variable are better 
        int z;
	printf("Two numbers are: ");
	scanf("%d%d", &x, &y);
	z = compare(x, y);
	if (x == y){
		printf("Both the value are equall. \n");
	}
	else{	printf("The larger number is %d .\n", z);
	}
	
	return 0;

}
int compare (int a ,  int b){
	if (a == b){
		return 0;}
	if ( a > b ){
		return a;}
	else {
		return b;}
}
