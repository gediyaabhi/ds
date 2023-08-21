#include<stdio.h>
#define n 5
int a[n],top =-1;

int insertend(int val)
{
    if(top>=n-1)
    {
        printf("array is full... \n ");
    }
    else 
    {
        top++;
        a[top]=val;
    }
}
int insertfirst(int val)
{
    if(top>=n-1)
    printf("array is full");
    
    else 
    {
        top++;
        for(int i=top;i>=0;i--)
        {
            a[i]=a[i-1];
        }
        a[0]=val;
    }
}
int lastdlt()
{
    if(top<0)
    printf("array isd empty.......");

    else{
        top--;
    }
}
int firstdlt()
{
    if(top<0)
        printf("array is empty");

    else
    {
        top--;
        for(int i=0;i<=top;i++)
            a[i]=a[i+1];
              
    }
}
int display()
{
    if(top<0)
    printf("array is empty...\n");

    else{
        for(int i=0;i<=top;i++)
            printf("%d ",a[i]);
        }
}

int main ()
{
    insertend(100);
    insertend(200);
    insertfirst(10);
    insertfirst(20);
    firstdlt();
    insertfirst(30);
    lastdlt();
    display();
}