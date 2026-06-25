//WAP to check the given number is palindrom or not

#include<stdio.h>

int main(){
	int num,temp,rev=0,rem;
	printf("Enter the number :- ");
	scanf("%d",&num);
	
	temp = num;
	
	while(temp!=0){
		rem = temp % 10;
		rev = rev*10 + rem ;
		temp = temp/10;
	}
	if(rev == num){
		printf("%d is Palindrome",num);
	}
	else{
		printf("%d is not palindrome",num);
	}
}
