#include<stdio.h>
void main () {
	int x=1;
	printf("start code\n");
	if(--x) {
		printf("In first if block\n");
	}
	if(++x||x++) {
		printf("In second if block\n");
	}
	printf("x=%d\n",x);
	printf("End code\n");
}
