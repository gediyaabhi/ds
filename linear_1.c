#include<stdio.h>
#include<stdlib.h>
#define n 5
int a[n],z;
int find(int a[])
{
    printf("enter a number:");
    scanf("%d",&z);
    for(int i=0;i<n;i++)
    {
        if(z==a[i]){
                return z;
        }
    }
    return -1;
}
int main()
{
    int i;
    for(int i=0;i<n;i++)
    {
        a[i]=rand()%50+1;
        printf("%d ",a[i]);
    }
    int y=find(a);

    if(y>=0)
    {
        printf("number is found");
    }
    else
        printf("number is not found");
}