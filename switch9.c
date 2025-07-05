// In switch case only integer value is allow character is internally going to a integer ...
#include<stdio.h>
void main () {
	const float x=66.5;
	//printf("Enter the value :\n");
	//scanf("%d",&x);
	switch(x) {
		case 65.5:
			printf("Value of x is 65\n");
			break;
	       case 66.5:
                        printf("Value of x is 66\n");
                        break;
	      case 67.5:
                        printf("Value of x is 67\n");
                        break;
	      case 68.5:
                        printf("Value of x is 68\n");
                        break;
	       default :
			printf("Wrong Input\n");
			break;
	}
}
