#include<stdio.h>
#include "prepro2"

int main()
{
    struct Demo obj;

    printf("Inside main\n");

    printf("Rate of interest is %f\n,ROI");

    printf("Fees of Logic building batch : %d\n,FEES");

    printf("Size of demo structure : %d\n",sizeof(obj));

    return 0;
    
}