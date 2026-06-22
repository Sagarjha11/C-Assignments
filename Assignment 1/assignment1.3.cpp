//WAP to take input as student name and roll no and show it in output

#include<stdio.h>

int main(){
	char name[50];
	int roll;
	
	printf("Enter Student's Name :- ");
	scanf("%s",&name);;
	printf("Enter Student's Roll No :- ");
	scanf("%d",&roll);
	printf("Student name is %s \n",name);
	printf("Student Roll no is %d",roll);
}
