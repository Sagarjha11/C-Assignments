// WAP to make result using switch case

#include<stdio.h>

int main(){
	char ch;
	printf("Enter a grade of the student :- ");
	scanf("%c",&ch);
	
	switch(ch){
		case 'A' :
		case 'a' :
			printf("Result is Excellent");
			break;
		case 'B' :
		case 'b' :
			printf("Result is Very Good");
			break;
		case 'C' :
		case 'c' :
			printf("Result is Good");
			break;
		case 'D' :
		case 'd' :
			printf("Pass need to improve");
			break;
		default:
			printf("Student is fail");
	}
}
