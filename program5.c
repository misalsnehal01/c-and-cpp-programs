#include<stdio.h>
int x=10;//gobal var
int y;
void office () {
	int a=50;//local var
        printf("In office-Nusat coding.....\n");
}
void main() {
	printf("wake-up\n");
        office();
	printf("sleep\n");
}
