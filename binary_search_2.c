// desending value
#include<stdio.h>
#define n 6
int a[n]={50,48,35,33,13,5},x,l=0,h=n,mid;
int find(int a[])
{
    printf("enter a value :");
    scanf("%d",&x);

    for(int i=0; l<=h;i++)
    {
        mid=(l+h)/2;
        if(a[mid]==x)
            return mid+1;       
        else if(a[mid]>x)
            l=mid+1;
        else if(a[mid]<x)
            h=mid-1;
    }
    return -1;
}
int main()
{
    int z;
    z=find(a);
    if(z>=0)
        printf("number is found");
    else
        printf("number is not found");
}