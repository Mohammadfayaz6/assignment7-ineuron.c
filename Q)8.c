//Q8.write program to find next prime numbers of a given number.
#include<stdio.h>
int main()
{  
    int i,n,flag=0;
    printf("next prime number of given numbers\n");
    for(n=15;n<=50;n++)
    {  
        flag=0;
        for(i=2;i<=n/2;i++)
        {
            if(n%i==0)
            {
                flag=1;
            }
        }  
            if(flag==0)
            {
                printf("%d ",n);
                break;
            }  
    }
    return 0;
}