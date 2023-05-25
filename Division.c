//this program performs division
#include<stdio.h>
void main()
{
    int x,y;
    float z;
    {
        printf("Enter x \n");
        scanf("%d",&x);
        printf("Enter y \n");
        scanf("%d",&y);
        z=x/y;
        if (y==0)
        {
            printf("Division not possible \n");
        }
        else
        {
            //th value of z will be printed with only 1 decimal
            printf("The value of z is %.1f\n",z);
        }

    }
}






