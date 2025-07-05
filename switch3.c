#include<stdio.h>
void main () {
	char x;
	printf("Enter the value in range 1-5\n");
	scanf("%c",&x);
	switch (x) {
		default:                                                                                                                                                                                                                                                                                              printf("Wrong input !!!\n");
                      break;
                      
	        case 'A':
	               printf("One\n");
                       break;
                 case 'B':
		       printf("Two\n");
		       break;
				
		case 'C':
		       printf("Three\n");
		       break;

		case 'D':   
		       printf("Four\n");															          break;
		case 'E':
		       printf("Five\n");    
		       break;
	}
}	
