#include<stdio.h>
#include<stdlib.h>

int main()
{
    int M,N,area;
    float pi;
    printf("Enter total points inside curve: ");
    scanf("%d",&M);
    printf("Enter total points inside square/rectangle : ");
    scanf("%d",&N);
    printf("Enter total area of square/rectangle : ");
    scanf("%d",&area);
    pi=(area*((float)M/N))*4;
    printf("Value of pi = %.3f",pi);
}
