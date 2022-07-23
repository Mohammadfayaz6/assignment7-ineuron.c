//Q4.write program to calculate the HCF of two numbers.
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
      printf("HCF is %d",hcf);
}