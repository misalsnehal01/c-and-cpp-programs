#include<stdio.h>
void main () {
	int x=10;
	int ans;
	printf("%d\n",x); //5
	ans = ++x + ++x;  
	printf("%d\n",x);
	printf("%d\n",ans);
}
