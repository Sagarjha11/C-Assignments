// WAP to swap two numbers without help of third variable

#include<stdio.h>

int main(){
	int a,b,temp;
	printf("Enter first number :- ");
	scanf("%d",&a);
	printf("Enter second number :- ");
	scanf("%d",&b);
	
	a = a+b;
	b = a - b;
	a = a - b;
	
	printf("After swapping\n");
	printf("a = %d \n b = %d",a,b);
}
