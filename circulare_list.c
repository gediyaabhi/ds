#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head = NULL;

void inseretEnd(int val)
{
    struct node *ptr = head;
    struct node *temp = malloc(sizeof(struct node));
    temp->data = val;
    temp->next = NULL;

    if (head == NULL)
    {
        head = temp;
        temp->next = head;
        return;
    }
    while (ptr->next != head)
    {
        ptr = ptr->next;
    }
    ptr->next = temp;
    temp->next = head;
    return;
}

void MidInsert()
{
    int val,position;
    printf("Enter Your Value  : ");
    scanf("%d", &val);
    printf("enter your position :");
    scanf("%d",&position);
    struct node *ptr = head;
    struct node *temp = malloc(sizeof(struct node));
    temp->data = val;
    temp->next = NULL;

    while (ptr->data != position)
    {
        ptr = ptr->next;
    }
    temp->next = ptr->next;
    ptr->next = temp;
}
void Firstinsert(int val)
{
    struct node *ptr = head;
    struct node *temp = malloc(sizeof(struct node));
    temp->data = val;
    temp->next = NULL;

    if (head == NULL)
    {
        head = temp;
        temp->next = head;
        return;
    }

    while (ptr->next != head)
    {
        ptr = ptr->next;
    }
    ptr->next = temp;
    temp->next = head;
    head = temp;
    return;
}
void MidDelete(int position)
{
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

void DeleteEnd()
{
    struct node *ptr = head;
    struct node *p;

    if (head == NULL)
    {
        printf("List Is Empty.....\n");
        return;
    }
    while (ptr->next != head)
    {
        p = ptr;
        ptr = ptr->next;
    }

    p->next = head;
    free(ptr);
    return;
}
void FirstDelete()
{
    struct node *ptr = head;
    struct node *p;

    if (head == NULL)
    {
        head = NULL;
        printf("List Is Empty....\n");
        return;
    }
    ptr = ptr->next;
    head = ptr;
    while (ptr->next != head)
    {
        p = ptr;
        ptr = ptr->next;
    }
    p->next = head;
    free(ptr);
}
int Display()
{
    struct node *ptr = head;

    if (head == NULL)
    {
        printf("List Is  Empty..");
    }
    else
    {
        while (ptr->next != head)
        {
            printf("%d ", ptr->data);
            ptr = ptr->next;
        }
        printf("%d ", ptr->data);
    }
    printf("\n");
}

int main()
{
            inseretEnd(10);
            inseretEnd(20);
            inseretEnd(30);
            Firstinsert(11);
            Firstinsert(22);
            Display();
            MidInsert();
            Display();
}