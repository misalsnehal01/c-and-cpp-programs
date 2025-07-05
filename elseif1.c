#include<stdio.h>
void main () {
	float pMoney;
	printf("Enter money :-");
	scanf("%f",&pMoney);
	if (pMoney >=2500){
		printf("Happypola\n");
	} else if(pMoney >=2000) {
		printf("CO2\n");
        } else if(pMoney >=1000) {
        	printf("Sarovar\n");
        } else if(pMoney >=500) {
                printf("Hotel Vaishali\n");
	} else if(pMoney >=200) {
                printf("Sujata Mastani\n"); 
	}
        else {
	printf("Gharich Basu!!!!\n");
	}
}	
