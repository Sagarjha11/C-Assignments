// WAP to take temperature in Fehrenheit and change it to Celsius

#include<stdio.h>

int main(){
	float f,c;
	printf("Enter temperature in Fehrenheit :- ");
	scanf("%f",&f);
	
	c = (f-32)*5/9;
	printf("Temperature in Celcius is --> %f ",c);
	
	 
	return 0;
	
}
