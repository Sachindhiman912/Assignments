#include<stdio.h>
int prime(int);
int main()
{
    int a,c;
    printf("enter any number to check whether it is prime or not :");
    scanf("%d",&a);
    c=prime(a);
    if(c==1)
    {
        printf("Number is not prime");
    }
    else
    {
        printf("Number is prime");
    }
}
int prime(int x)
{
    int i,temp=0;
    for(i=2;i<=x/2;i++)
    {
        if(x%i==0)
        {
            temp++;
        }
        
    }
    if(temp==0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}