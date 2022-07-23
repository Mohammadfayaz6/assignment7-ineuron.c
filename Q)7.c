//Q7.write program to print all prime numbers between two given numbers.
#include<stdio.h>
int main()
{  
    int i,a=10,b=50,flag=0;
    printf("prime numbers b/w two given numbers\n");
    for(a=10;a<=b;a++)
    {  
        flag=0;
        for(i=2;i<=a/2;i++)
        {
            if(a%i==0)
            {
                flag=1;
            }
        }  
            if(flag==0)
            {
                printf("%d ",a);
            }  
    }
    return 0;
}