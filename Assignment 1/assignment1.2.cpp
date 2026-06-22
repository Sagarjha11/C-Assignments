#include<stdio.h>
// WAP to find largest among two using ternary operator

int main(){
	int a, b,largest;
	printf("Enter the Number A :- \n");
	scanf("%d",&a);
	printf("Enter the Number B :- \n");
	scanf("%d",&b);
	
	largest = (a > b) ? a : b;
	
	printf("Largest among %d and %d is %d", a , b , largest);
	
}
