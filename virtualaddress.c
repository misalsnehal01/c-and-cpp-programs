#include<stdio.h>
void main () {
	int x=10;
	printf("%p\n",&x);
	printf("%d\n",x);
	int y={10,20,30};
	printf("%p\n",&y);
	printf("%d\n",y);
	int z=(10,20,30);
	printf("%p\n",&z);
	printf("%d\n",z);
}

