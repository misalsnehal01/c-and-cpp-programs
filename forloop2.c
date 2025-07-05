#include<stdio.h>
void main () {
	int start;
	int end;
	printf("Enter starting time :\n");
	scanf("%d",&start);
	printf("Enter ending time :\n");
	scanf("%d",&end);
		if(end<=6) {
		printf("Your time is not end\n");
		}else {
			printf("Your time is end\n");
	}
}
