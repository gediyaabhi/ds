#include<stdio.h> 
#define n 5 
int a[n],f=-1,r=-1; 
int firstinsert(int val) 
{
    // if(f>=0)
    // {
        if(r<0) 
        { 
            f = r = 0; 
            a[r]=val; 
        } 
        else if(f==0) 
        { 
            printf("position  is full ... \n"); 
        } 
        else
        { 
            f--;
            a[f]=val; 
        } 
    // } 
}
int insertend(int val) 
{ 
    if(r<0) 
    { 
        f = r = 0; 
        a[r]=val; 
    } 
    else if(r>=n-1) 
    { 
        printf("Queue is full ... \n"); 
    } 
    else { 
        r++;
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
    else 
    { 
        r--; 
    } 
} 
 
int firstdlt() 
{ 
    if (f == -1) 
    { 
        printf("queue is empty.\n"); 
    } 
    else if (f == r) 
    { 
        f = r = -1; 
    } 
    else 
    { 
       f++; 
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
        do 
        { 
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
        printf("\n 1. front insert "); 
        printf("\n 2. rear insert"); 
        printf("\n 3. first delete"); 
        printf("\n 4. rear delete"); 
        printf("\n 5. show display"); 
        printf("\n 0. Exit..."); 
        printf("\n Enter a choice number :"); 
        scanf("%d",&ch); 
        
        switch (ch) 
        { 
            case 1: 
            printf("Enter a value "); 
            scanf("%d",&val); 
            firstinsert(val); 
            break; 
             
            case 2: 
            printf("Enter a value "); 
            scanf("%d",&val); 
            insertend(val); 
            break; 
             
            case 3: 
                firstdlt(); 
            break; 
 
            case 4: 
                dlt(); 
            break; 
 
            case 5: 
                display(); 
            break;  
             
            case 0: 
                break; 
         
            default: 
            printf("wrong choice ..."); 
                break; 
        } 
    } 
    while(ch!=0); 
     
}