#include<stdio.h>
void main () {
	int money;
	printf("Enter your money \n");
	scanf("%d",&money);
	printf("user money is =%d \n",money);
	if(money >= 5000 ) {
	printf(" then user is going to hotel V star \n");
	}
	if( money <5000 ) {
		printf("then user is going to hotel mogra \n");
	}
}
