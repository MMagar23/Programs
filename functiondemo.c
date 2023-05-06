#include<stdio.h>

int Addition(int A,int B)
{
    int Result=0;

    Result =A+B;

    return Result;

}

int main()
{
    int NO1 =10;
    int NO2 =11;
    int Ans =0;

    Ans=Addition(NO1,NO2);
    printf("%d",Ans);
    return 0;
}