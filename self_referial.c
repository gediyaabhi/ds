#include<stdio.h>
struct node {
    int data;
    char ch;
    struct node *ptr;
};

int main()
{
    struct node a,b,c,d;
    a.ch = 'A';
    a.data= 50;
    a.ptr= NULL;


    b.ch='b';
    b.data= 100;
    b.ptr= NULL;

    c.ch='c';
    c.data=150;
    c.ptr=NULL;

    d.ch='d';
    d.data=200;
    d.ptr=NULL;

    printf(" A Data : %d \tchar : %c ", a.data,a.ch);
    printf("\n B Data : %d \tchar : %c ", b.data,b.ch);
    printf("\n C Data : %d \tchar : %c ", c.data,c.ch);
    printf("\n D Data : %d \tchar : %c ", d.data,d.ch);

    a.ptr=&b;
    b.ptr=&a;
    c.ptr=&d;
    d.ptr=&c;
    printf("\n\n\n B Data : %d \tchar : %c ",a.ptr->data, a.ptr->ch);
    printf("\n A Data : %d \tchar : %c ", b.ptr->data,b.ptr->ch);
    printf("\n C data : %d \tchar : %c", d.ptr->data,d.ptr->ch);
    printf("\n D data : %d \tchar : %c",c.ptr->data,c.ptr->ch);
}