#include<stdio.h>
void main () {
	int num;
	char ch;
	printf("Enter the value of Number:");
	printf("Enter thr value of Character:");
	scanf("%d",&num);
	scanf("%c ",&ch);
	for(int i=4;i>=1;i--){
		num=1;
		ch='A';
		for(int j=1;j<=i;j++){
			if(j/2==0) {
		          printf("%d",num);
			  
			}
			else{
				printf("%c",ch);
			
			}
		}
		printf("\n");
	}
}

		
