//Q10.write program to print all Armstrong numbers under 100
#include<stdio.h>
int main()
{   
    int n,i,res,rem;
    printf("armstrong number under 1000\n");
    for(i=1;i<=1000;i++)
    {
        res=0;
        n=i;
        while(n!=0)
        {
            rem=n%10;
            res=res+rem*rem*rem;
            n=n/10;
        }
         if(res==i)
        printf("%d ",i);
    }
  
    return 0;
}