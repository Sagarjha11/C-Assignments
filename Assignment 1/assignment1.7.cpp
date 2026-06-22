// WAP to calculate of Three number

#include<stdio.h>

int main(){
	float a,b,c;
	float average;
	printf("Enter the First number :- ");
	scanf("%f",&a);
	printf("Enter the Second number :- ");
	scanf("%f",&b);
	printf("Enter the Third number :- ");
	scanf("%f",&c);
	
	average = (a+b+c)/3;
	
	printf("Avergae of %f , %f and %f is %.3f",a,b,c,average);
	
}
