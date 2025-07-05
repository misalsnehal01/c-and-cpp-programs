#include<stdio.h>
void main () {
	int age;
	printf("Enter your age :");
	scanf("%d",&age);
	printf("User age is =%d\n",age);
	if(age <18) {
        printf("Not apllicable for vote!\n");
	}
	if(age >=18) {
		printf("Applicable for vote!!\n");
	}
	
}
