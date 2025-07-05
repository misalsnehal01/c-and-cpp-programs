#include<stdio.h>
void main () {
	const int x=66;
	switch(x) {
		case 65:
			printf("Value of x is 65\n");
			break;
	       case 66:
                        printf("Value of x is 66\n");
                        break;
	      case 67:
                        printf("Value of x is 67\n");
                        break;
	      case 68:
                        printf("Value of x is 68\n");
                        break;
	       default :
			printf("Wrong Input\n");
			break;
	}
}
