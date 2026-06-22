// WAP to check weather the alphabete is vowel or consonent

#include<stdio.h>

int main(){
	int ch;
	
	printf("Enter the Alphabet :- ");
	scanf("%c",&ch);
	
	if(ch == 'a' ||ch == 'e' ||ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'){
		printf("%c is an Vowel",ch);
	}
	else{
		printf("%c is a Consonant",ch);
	}
}
