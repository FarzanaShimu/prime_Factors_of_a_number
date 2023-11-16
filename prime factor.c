#include<stdio.h>
int main()
{
    int num,i,j;
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        if(num%i==0)
        {
            for(j=2;j<=i;j++)
            {
                if(i%j==0)
                {
                    printf("%d",i);
                }
            }
        }
    }

    return 0;

}