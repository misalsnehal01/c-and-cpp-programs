#include<stdio.h>
void main () {
	int start,end;
	printf("Enter the start number :");
	scanf("%d",&start);
	printf("Enter the end number :");
	scanf("%d",&end);
                 while(start <= end) {
		if(start / 4== 0 && start / 5 == 0) {
        	printf("%d is divisible by 4 & 5 \n",start);
		}else{
			printf("%d is not divisible by 4 & 5 \n",end);
		}
	start++;
}
}
