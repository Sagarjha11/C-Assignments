// WAP to check whether the number is positive or negative

#include<stdio.h>

int main(){
	int a;
	printf("Enter the number :- ");
	scanf("%d",&a);
	
	if(a>=0){
		printf("%d is Positive",a);
	}
	else{
		printf("%d is Negative",a);
	}
}
