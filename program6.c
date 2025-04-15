#include<stdio.h>
int a=10;
void fun() {
	int x=20;   //gobal var
	printf("in fun\n");
}
void main() {
	int y=30; //local var
	printf("start main\n");
	fun(); //call of fun function
	printf("End of main\n");
}

