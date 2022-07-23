//Q2.write program to print the n terms of Fibonacci series.
#include<stdio.h>
int main()
{
    int n,i,prev=0,cur=1,next=0;
    printf("Enter a number\n");
    scanf("%d",&n);
    printf("first N terms of fibonacci series\n");
    printf("0 1 ");
    for(i=0;i<n;i++)
    {
        next=prev+cur;
        printf("%d ",next);
        prev=cur;
        cur=next;
    }
       

    return 0;

}