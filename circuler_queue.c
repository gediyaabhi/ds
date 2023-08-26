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

int dlt()
{
   if (f == -1)
    {
        printf("queue is empty.\n");
    }
    else if (f == r)
    {
        f = r = -1;
    }
    else if (r == 0)
    {
        r = n - 1;
    }
    else
    {
        r--;
    }
}

int display()
{
    int i=f;
    if(f<0)
    {
        printf("Queue is empty \n");
    }
    else {
        do{
            printf("%d ",a[i]);
            i = (i+1) % n;
        }
        while(i != (r+1)%n);
    }
}

int main ()
{
    int ch,val;

    do{

        printf(" enter a choice number :");
        scanf("%d",&ch);
        switch (ch)
        {
            case 1:
            printf("Enter a value ");
            scanf("%d",&val);
            insertend(val);
            break;

            case 2:
                dlt();
            break;

            case 3:
                display();
            break;
            
            case 4:
                break;
            default:
                break;
        }
    }
    while(ch!=4);
    
}
