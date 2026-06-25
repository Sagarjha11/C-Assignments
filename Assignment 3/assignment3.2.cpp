// WAP to reverse the digit of a given number

#include<stdio.h>

int main(){
	int num, remainder, reverse = 0 ;
	
	printf("Enter the number :- ");
	scanf("%d",&num);
	
	while(num!= 0){
		remainder = num % 10;
		reverse = reverse*10 + remainder;
		num = num / 10;
	}
	
	printf("Reversed number is %d\n",reverse);
	
	return 0;
}
