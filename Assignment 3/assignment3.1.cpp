// WAP to generate Fibonacci series upto given numbers


#include<stdio.h>

int main(){
	int n, first = 0, second = 1, next;
	
	printf("Enter the no of terms :- ");
	scanf("%d",&n);
	
	printf("Fibonacci series upto %d terms is ",n );
	
	for(int i = 1; i<=n ; i++){
		if(n <= 0){
        printf("Please enter a positive number of terms.\n");
         }
		if(i == 1){
			printf("%d ",first);
			continue;
		}
		
		
		if(i == 2){
			printf("%d ",second);
			continue;
		}
		
		next = first + second;
		printf("%d ",next);
		
		first = second;
		second = next;
	}
	return 0;
}
