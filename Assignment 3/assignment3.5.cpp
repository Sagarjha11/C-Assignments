// WAP to find the som of digit of a given number

#include<stdio.h>

int main(){
	int num,sum = 0, rem;
	printf("Enter the number :- ");
	scanf("%d",&num);
	
	while(num!=0){
		rem = num%10;
		sum = sum + rem;
		num = num/10;
	}
	
	printf("Sum of the digits = %d",sum);
	
	
}
