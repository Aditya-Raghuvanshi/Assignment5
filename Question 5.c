//Write a program to print the first N odd natural numbers in reverse order.
#include<stdio.h>

int main()
{
    int N,n;
    scanf("%d",&N);
    n=2*N-1;
    for(int i=n;i>=1;i--)
    {
        if(i%2==0)
            continue;
        else
            printf("%d ",i);

    }
    return 0;
}
