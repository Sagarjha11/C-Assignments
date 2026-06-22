// WAP to check weather the letter is Uppercase or Lowercase


#include<stdio.h>

int main(){
	 char ch;
	 printf("Enter the Character :- ");
	 scanf("%c",&ch);
	 
	 if(ch>= 'A' && ch<='Z'){
	 	printf("Alphabet %c is  Uppercase",ch);
	 }
	 else if(ch > 'a' && ch <'z'){
	 	printf("Alphabet %c is  Lowercase",ch);
	 }
	 else{
	 	printf("%c is not a Alphabet",ch);
	 }
}
