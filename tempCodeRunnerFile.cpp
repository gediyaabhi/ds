#include<stdio.h>
#define n 5
    int a[n],i,x,l=0,h=n,mid;
int find (int a[])
{
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
    int i;
    for(i=0;i<n;i++)
a[i]=(rand()%99)+1;    
    for(i=0;i<n;i++)
        printf("%d ",a[i]);

        find(a);
}