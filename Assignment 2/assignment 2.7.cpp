// WAP to find geeatest among four using ternary operator

#include<stdio.h>

int main(){
	int num1,num2,num3,num4,max;
	
	printf("Enter first number :- ");
	scanf("%d",&num1);
	
	printf("Enter second number :- ");
	scanf("%d",&num2);
	
	printf("Enter third number :- ");
	scanf("%d",&num3);
	
	printf("Enter forth number :- ");
	scanf("%d",&num4);
	 max = (num1 > num2) ? num1 : num2;
	 max = (max > num3) ? max : num3;
	 max = (max > num4) ? max : num4;
	 printf("Largest among %d , %d , %d ,%d is --> %d",num1,num2,num3,num4,max);
	
	
}
