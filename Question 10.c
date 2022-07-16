//Write a program to print a table of N.
#include<stdio.h>

int main()
{
    int N;
    scanf("%d",&N);
    printf("Table of %d is :\n",N);
    for(int i=1;i<=10;i++)
    {
            printf("%d x %d = %d \n",N,i,i*N);

    }
    return 0;
}
