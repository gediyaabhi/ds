#include<stdio.h>
#include<stdlib.h>

struct node 
{
    int data;
    struct node *next;
};

struct node *head = NULL;
void insertend(int val)
{
    struct node *ptr= head;
    struct node *temp = malloc(sizeof (struct node));

    temp -> data = val;
    temp -> next = NULL;

    if(head == NULL)
    {
        head = temp;
        return;
    }
    while (ptr-> next != NULL)
    {
        ptr = ptr -> next; 
    }
    ptr-> next = temp;
    return;
}

void deleteEnd()
{
    struct node *ptr = head;
    struct node *p;
    
    if(head-> next == NULL)
    {
        head = NULL;
        free(ptr);
        return;
    }
    while (ptr->next!=NULL)
    {
        p = ptr;
        ptr=ptr->next;
    }

    p -> next=NULL;
    free(ptr);
    return;
}

void mid()
{
    int position,val;
    printf("enter your value :");
    scanf("%d",&val);

    printf("enter your insert position:");
    scanf("%d",&position);

    struct node *ptr=head;
    struct node *temp = malloc(sizeof (struct node));

    temp->data = val;

    while(ptr->data!=position)
    {
        ptr=ptr->next;
    }
    temp->next=ptr->next;
    ptr->next=temp;
     return;
}

void middelete()
{
    int position;
    printf("enter your delete position :");
    scanf("%d",&position);
    struct node *ptr = head;
    struct node *p;


    while (ptr->data != position)
    {
        p = ptr;
        ptr = ptr->next;
    }
    p->next = ptr->next;
    free(ptr);
}

void display()
{
    struct node *ptr=head;
    if(head==NULL)
        printf("list is empty");
    
    else 
    {
        while(ptr!=NULL)
        {
            printf("%d ",ptr->data); 
            ptr=ptr->next;
        }
    }
    printf("\n");
}

void firstinsert(int val)
{
    struct node *ptr= head;
    struct node *temp = malloc(sizeof (struct node));
    temp -> data = val;
    temp -> next = head;
    head=temp;
}

void firstdelete()
{
    struct node *temp= head;
    if(head == NULL)
    {
       printf("list is empty...");
       return;
    }
   
    head = head->next;
}

int main ()
{
    // firstinsert(10);
    // firstinsert(20);
    // firstinsert(30);

    insertend(100);
    insertend(200);
    insertend(300);
     display();
    // firstdelete();
    // firstdelete();

    // mid();
    // display();
    display();
    // middelete();
    // middelete();
    // firstdelete();
    // deleteEnd();
    display();
}