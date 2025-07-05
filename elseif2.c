#include<stdio.h>
void main () {
	int baget;
	printf("Enter your baget:-");
	scanf("%d",&baget);
	if (baget >=50000) {
		printf("Going to Goa\n");
		} else if(baget >=40000) {
                printf("Near to pune\n");
		} else if(baget >=20000) {
                printf("Kokan\n");
		} else {
			printf("Trip Cancel\n");
		}
}
