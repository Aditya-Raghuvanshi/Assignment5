//Write a program to print the first N even natural numbers
#include<stdio.h>

int main()
{
    int N,n;
    scanf("%d",&N);
    n=2*N;
    for(int i=1;i<=n;i++)
    {
        if(i%2==0)
            printf("%d ",i);

    }
    return 0;
}
