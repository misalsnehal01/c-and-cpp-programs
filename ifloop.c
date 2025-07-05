#include<stdio.h>
void main () {
    float income;
    printf("Enter your salary \n");
    scanf("%f",&income);
    printf ("Value of income =%f\n",income);
    if(income >=0 && income <=500000) {
            printf("TAX Slab is 0%% \n");
    }
    if(income >=500000 && income <=1000000) {
            printf("TAX Slab is 10%% \n");
    }
    if(income >=1000000 && income <=1500000) {
            printf("TAX Slab is 15%% \n");
    }
    if(income >=1500000 && income <=2000000) {
            printf("TAX Slab is 20%% \n");
    }
    if(income >=2000000)
            printf("TAX Slab is 30%% \n");
    }
