#include<stdio.h>

int A=10;       //non bss
int B;          // bss

extern int C;

int main()
{
    printf("%d \n",A);
    printf("%d \n",B);
    printf("%d \n",C);

    return 0;
}



