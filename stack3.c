
// insert first  values && first delete
#include<stdio.h>
#define n 5
int a[n],b[n],top =-1; 

int last(int val)
{
    if (top>=n-1)
        printf("Array is full....\n");
    else 
    {
        top++;
        a[top]=val;
       
    }
}
int startdel()
{
    if(top<0)
        printf("Array is empty");

    else
    {
        top--;
        for(int i=0;i<=top;i++)
            a[i]=a[i+1];
    }
}
int start(int val)
{
   top++;
   for(int i=0;i<=top;i++)
   {
    a[top-i]=a[top-i-1];
   }
   a[0]=val;
}

int display ()
{
    if (top<0)
        printf("array is empty....\n");
    else
    {
        for(int i=top; i>=0;i--)
            printf("%d ",a[i]);
            
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
     start(10);
     start(20);
    // start(30);
    //   start(40);
    last(100);
    last(200);

    // last(133);
    last(300);
    // start(50);
    // start(60);
    // start(70);

    //  dlt();
    //  dlt();
    display();
    // dsply();
}