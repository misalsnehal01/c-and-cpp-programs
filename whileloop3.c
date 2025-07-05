#include<stdio.h>
 int  main () {
	int days;
	printf("Enter number of days to submit the assignment :");
	scanf("%d",&days);
	for ( int i=days;i >=0; i--) {
		printf("%d days remaining\n",i);
	}
        return 0;
}
