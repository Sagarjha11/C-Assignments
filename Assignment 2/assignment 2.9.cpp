// WAP to check the day is week or weakend


#include<stdio.h>

int main(){
	int day;
	printf("Enter a day :- ");
	scanf("%d",&day);
	
	switch(day){
		case 1 :
			printf("%dst day is Monday",day);
			break;
		case 2 :
			printf("%dnd day is Tuesdaqy",day);
			break;
		case 3 :
			printf("%drd day is Wednesday",day);
			break;
		case 4 :
			printf("%dth day is Thursday",day);
			break;
		case 5 :
			printf("%dth day is Friday",day);
			break;
		case 6 :
			printf("%dth day is Saturday",day);
			break;
		case 7 :
			printf("%dth day is Sunday",day);
			break;
		default:
			printf("Invalid day!!!");
		
	}
}
