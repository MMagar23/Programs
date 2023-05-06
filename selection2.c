
//Switch case

#include<stdio.h>

int main()
{
    int std=0;
    printf("Enter your standard:\n");
    scanf("%d",&std);

    switch (std)
    {
        case 1:
            printf("Your exam time is 1 pm \n ");
            break;

        case 2:
            printf("Your exam time is 2 pm \n ");
            break;

        case 3:
            printf("Your exam time is 3 pm \n ");
            break;

        case 4:
            printf("Your exam time is 4 pm \n ");
            break;                

        default:
            printf("Invalid standard");

        return 0;
    }
}