#include<stdio.h>
void main () {
	float sgpa;
	printf("Enter your sgpa:");
	scanf("%f",&sgpa);
	if(sgpa>6.00) {
		printf("Your eligible for interview!!\n");
	}
	else {
		printf("Your not eligible fot interview!!!!!\n");
	}
}
