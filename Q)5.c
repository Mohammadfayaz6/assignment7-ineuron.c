//Q5.write program to check whether two given number are 
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b,i,hcf;
    printf("Enter two number\n");
    scanf("%d%d",&a,&b);
    for(i=1;i<=a*b;i++)
    {
        if(a%i==0 && b%i==0)
        {
            hcf=i;
        }
     
    }
       if(hcf==1)
        {
            printf("co prime");
        }
        else
        {
          printf("not co prime");
        }
         return 0;
}