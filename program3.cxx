// 24AI-41

#include <stdio.h>
int main(){
	int temprature;
	printf("Enter Temprature in Celcius: ");
	scanf("%d", &temprature);
	int farenheit = temprature * (9/5) + 32;
	printf("%d", farenheit);
}