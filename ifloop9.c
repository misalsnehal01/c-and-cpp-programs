#include<stdio.h>
void main () {
	char ch;
	printf("Are you alive\n");
	printf("Enter y or n \n");
	scanf("%c",&ch);
	if(ch=='y'|| ch=='Y') {
		printf("Nice\n");
	}
	else {
		printf("User Died\n");
	}
}
