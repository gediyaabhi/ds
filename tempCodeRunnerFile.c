#include<stdio.h>
#define n 5
int a[n],f=-1,r=-1;

int insertend(int val)
{
    if(r<0)
    {
        f = r = 0;
        a[r]=val;
    }
    else if((r+1)%n ==f)
    {
        printf("Queue is full ... \n");
    }
    else {
        r=(r+1)%n;
        a[r]=val;
    }
}

int display()
{
    int i=f;
    if(f<0)
    {
        printf("Queue is empty");
    }
    else {
        do{
            printf("%d",a[i]);
            i = (i+1) % n;
        }
        while(i != (r+1)%n);
    }
}

int main ()
{
    display();
}