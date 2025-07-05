#include<stdio.h>
void main () {
        int x;
        printf("Enter the value in range 1-5:\n");
        scanf("%d",&x);
        switch (x) {
		default:                                                                                                                                                                                                                                                                                              printf("Wrong input !!!\n");
		      //break;
                case 1:
                        printf("One\n");
                        break;

                case 2:
                        printf("Two\n");
                        break;

                  case 3:
                        printf("Three\n");
                        break;
                 case 4:
                        printf("four\n");
                        break;
                  case 5:
                        printf("five\n");
                        break;
                  default:

                        printf("Wrong input !!!\n");

        }
}
