// calculator using switch case

#include<stdio.h>

int main(){
	int num1,num2,num3,num4,add,sub,div,mul,choice;
	
	printf("Enter num1 :- ");
	scanf("%d",&num1);
	printf("Enter num2 :- ");
	scanf("%d",&num2);
	
	printf("Press 1 for Addition. :-  \nPress 2 for Subtraction. :-  \nPress 3 for Multiplicarion. :- \nPress 4 for Division. :- \n");
	scanf("%d",&choice);
	
	add = num1 + num2;
	sub = num1 - num2;
	mul = num1 * num2;
	div = num1 / num2;
	
	switch(choice){
		case 1:
			printf("Addition of %d and %d is ---> %d",num1,num2,add);
			break;
		case 2:
			printf("Subtraction of %d and %d is ---> %d",num1,num2,sub);
			break;
		case 3:
			printf("Multiplication of %d and %d is ---> %d",num1,num2,mul);
			break;
		case 4:
			printf("Division of %d and %d is ---> %d",num1,num2,div);
			break;
		default:
			printf("Invalid choice!!");
	}
	
}
