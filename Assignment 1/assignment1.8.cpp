// WAP to take input of P R T and calculate si 

#include<stdio.h>

int main(){
	float p,r,t,si;
	printf("Enter the amount of Principal :- ");
	scanf("%f",&p);
	printf("Enter the Rate :- ");
	scanf("%f",&r);
	printf("Enter the time in year :- ");
	scanf("%f",&t);
	
	si = (p*r*t)/100;
	
	printf("The SI for principal %f and Rate %f and Time %f  is  %f ",p,r,t,si);
	
	
	
}
