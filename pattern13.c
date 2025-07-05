#include<stdio.h>
void main () {
	int s=1;
	for(int i=1;i<=3;i++){
		for(int j=3;j>=i;j--){
			printf("%d ",s);
			s=s+2;
		}
	printf("\n");
}
}
