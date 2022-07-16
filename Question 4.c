//Write a program to print the first 10 odd natural numbers
#include<stdio.h>

int main()
{
    int N,n;
    scanf("%d",&N);
    n=2*N-1;
    for(int i=1;i<=n;i++)
    {
        if(i%2==0)
            continue;
        else
            printf("%d ",i);

    }
    return 0;
}
