//Q9.write program to to check whether a given number is Armstrong or not.
#include<stdio.h>
int main()
{   
    int num,remainder,armstrong=0,original;
    printf("enter a number\n");
    scanf("%d",&num);
    original=num;
    while(original!=0)
    {
        remainder=original%10;
        armstrong+=remainder*remainder*remainder;
        original/=10;
    }
    if(armstrong==num)
    {
        printf("armstrong number %d",num);
    }    
    else
    {
        printf("not armstong number %d",num);
    }
    return 0;
}