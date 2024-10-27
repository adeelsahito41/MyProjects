//24AI-41
#include<stdio.h>
int main(){
	int num;
	printf("Enter a Number: ");
	scanf("%d",&num);
	
	if (num%2==0){
		printf("It's an Even Number");
	}
	else if(num%2!=0){
		printf("It's an Odd Number");
	}
	else{
		printf("Wrong Input");
	}
}
	
	      
