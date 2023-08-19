
// insert first  values && first delete
#include<stdio.h>
#define n 5
int a[n],top =-1;
int insertend(int val)
{
    if (top>=n-1)
        printf("Array is full....\n");
    else 
    {
        top++;
        a[top]=val;
    }
}

int display ()
{
    if (top<0)
        printf("Array is empty....\n");
    else
    {
        for(int i=0; i<=top;i++)
            printf("%d",a[i]);
    }
}


int dlt()
{
    if (top<0)
        printf("Array is empty....\n");
    else
    {
       top--;
    }
}

int main ()
{
    insertend(10);
    insertend(20);
    insertend(30);
    insertend(40);
    insertend(50);
    insertend(60);
    insertend(70);

    dlt();
    dlt();
    display();
}