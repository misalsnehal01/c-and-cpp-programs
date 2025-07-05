#include<stdio.h>
void main () {
	int input;
	int x=2;
	int y=3;
    printf("Enter number \n");
    scanf("%d",&input);
    switch(input) {
	    case 10%5==0:
		 printf("5\n");
		 break;
             case 6:
                 printf("2+3\n");
                 break;
	     case 7:
                 printf("3+2\n");
                 break;
	      default:
                 printf("defalut\n");
                 break;	 
    }
}
