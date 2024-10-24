// 24AI-41

#include <stdio.h>
int main(){
	int farenhiet;
	printf("Enter Temprature for a number: ");
	scanf("%d", &farenhiet);
	int celcius = (farenhiet - 32) * 5/9;
	printf("%d", celcius);
}