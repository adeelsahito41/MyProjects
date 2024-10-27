
#include<stdio.h>
#include<conio.h>
int main(){
	int age;
	printf("Enter Your Age: ");
	scanf("%d",&age);
	
	if (age>18){
		printf("You're eligible");
	}
	else{
		printf("You're Not eligible for Voting");
	}
}