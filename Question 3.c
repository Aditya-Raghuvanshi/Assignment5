//Write a program to print the first 10 natural numbers in reverse order
#include<stdio.h>

int main()
{
    int N;
    scanf("%d",&N);
    for(int i=N;i>=1;i--)
    {
        printf("%d ",i);
    }
    return 0;
}
