#include<stdio.h>
int x=1;
void main (){
for(int i=1;i<=3;i++){
  for(int j=1;j<=3;j++){
	printf("%d ",x*x);
	x++;
	}
	printf("\n");
}
}
