#include<stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev; 
};
struct node *head = NULL;

void insertendrevs(int val)
{
    struct node *ptr=head;
    struct node *p;
    struct node *temp=malloc(sizeof(struct node));
    temp->data=val;
    temp->next=NULL;
    temp->prev=NULL;

    if(head==NULL)
    {
        head=temp;
    }

    while(ptr->next==NULL)
    {
        ptr=ptr->next;
    }
    ptr->next=temp;
    temp->prev=ptr;
    p=ptr->next;
}

void insertend(int val)
{
    struct node *ptr = head;
    struct node *temp = malloc(sizeof(struct node));
    temp->data = val;
    temp->next = NULL;
    temp->prev = NULL; 
    if (head == NULL)
    {
        head = temp;
        return;
    }
    while (ptr->next != NULL)
    {
        ptr = ptr->next;    
    }
    ptr->next = temp;
    temp->prev = ptr;
}

void revesdisplay()
{
    // struct node *ptr;
    // struct node *p;
    struct node *temp;
    if(head==NULL)
    {
        printf("list is empty.....");
    }
    else
    {
        while(ptr != NULL)
        {
            // printf("%d",ptr->data);
            ptr=ptr->next;
        }
        temp=ptr;
        while(ptr->prev!=NULL)
        {
            printf("%d",ptr->data);
            
        }
        
        printf("\n");
    }
}

void display()
{
    struct node *ptr = head;

    if (head == NULL)
        printf("List is empty.\n");
    else
    {
        while (ptr != NULL)
        {
            printf("%d ", ptr->data);
            ptr = ptr->next;
        }
      
        printf("\n");
    }
}

int main()
{
            insertend(10);
            insertend(20);
            insertend(30);
            // display();
            // fisrtinsert(11);
            // fisrtinsert(22);
            // fisrtinsert(33);
            display();
            // insertendrevs(11);
            // insertendrevs(22);
            // insertendrevs(33);

            // printf("================");
            revesdisplay();
            // deleteend();
            display();
}