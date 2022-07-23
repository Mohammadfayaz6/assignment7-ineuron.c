//Q1.write program to find the nth term of Fibonacci series.
#include<stdio.h>
int main()
{
    int n,i,prev=0,cur=1,next=0;
    printf("Enter a number\n");
    scanf("%d",&n);
    printf("Nth terms of the fibonacci series\n");
    for(i=0;i<n-1;i++)
    {
        next=prev+cur;
        prev=cur;
        cur=next;
    }
      printf("%d",next);
      
      return 0;

}