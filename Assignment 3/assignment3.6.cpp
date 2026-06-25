// WAP to check the no is armstrong or not


#include<stdio.h>

int main(){
	int num,sum = 0, temp, rem;
	
	printf("Enter number to check :- ");
	scanf("%d",&num);
	
	temp = sum;
	
	while(temp != 0){
		
		rem = num %10;
		sum = sum + rem* rem *rem;
		temp = temp/10;
	}
	if(sum == sum){
		printf("%d is Armstrong",num);
	}
	else{
		printf("%d is not Armstrong",&num);
	}
}
