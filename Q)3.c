//Q3.write program to check whether is there in Fibonacci series or not.
#include<stdio.h>
int main()
{
    int n,i,prev=0,cur=1,next=0;
    printf("Enter a number\n");
    scanf("%d",&n);
    for(i=0;1;i++)
    {
        next=prev+cur;
        prev=cur;
        cur=next;
        
        if(next==n)
        {
            printf("fibonacci number is found");
            break;
        }
        if(next>n)
        {
            printf("fibonacci number is not found");
            break;
        }
    }
       

    return 0;

}