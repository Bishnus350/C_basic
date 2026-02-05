/* Program to calculate the product of 2 numbers */
#include <stdio.h>
int a;
int b;
int c;
int d;
int product(int x , int y);
int main (void)
{
	printf ("The  First numberi 'a' is : \n");
	scanf("%d",&a);
	printf ("The  Second  number 'b' is : \n");
	scanf("%d",&b);
	c = a * b;
	printf ("The  product  is :%d \n", c);
	d = product( a , b);
	printf ("The  product function is :%d \n", d);


	return 0;
 
}
int product (int x , int y)
{
	return (x * y);
}

