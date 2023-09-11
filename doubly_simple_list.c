#include<stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev; 
};
struct node *head = NULL;


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

void deleteend()
{
    struct node *ptr = head;
    if (head == NULL)
    {
        printf("List is empty............\n");
        return;
    }

    while (ptr->next != head)
    {
        ptr = ptr->next;
    }

    if (ptr->prev != head)
    {
        ptr->prev->next = NULL;
    }
    else
    {
        head = NULL;
    }

    free(ptr);
}
void fisrtinsert(int val)
{
    struct node *temp = malloc(sizeof(struct node));
    temp->data = val;
    temp->next = head;
    temp->prev = NULL;

    if (head != NULL)
    {
        head->prev = temp;
    }
    head = temp;
}

void deletefirst()
{
    struct node *ptr = head;
    if (head == NULL)
    {
        printf("List is empty...........\n");
        return;
    }

    head = ptr->next;
    if (head != NULL)
    {
        head->prev = NULL;
    }
    free(ptr);
}

void midinsert(int val, int pos)
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

    while (ptr != NULL && ptr->data != pos)
    {
        ptr = ptr->next;
    }

    if (ptr != NULL)
    {
        temp->next = ptr->next;
        temp->prev = ptr;
        if (ptr->next != NULL)
        {
            ptr->next->prev = temp;
        }
        ptr->next = temp;
    }
    else
    {
        free(temp);
    }
}
void deletemid(int pos)
{
    struct node *ptr = head;
    if (ptr == NULL)
    {
        printf("List is empty.........\n");
        return;
    }

    if (ptr->data == pos)
    {
        head = ptr->next;
        if (head != NULL)
        {
            head->prev = NULL;
        }
        free(ptr);
        return;
    }

    while (ptr != NULL)
    {
        if (ptr->data == pos)
        {
            if (ptr->next != NULL)
            {
                ptr->next->prev = ptr->prev;
            }
            ptr->prev->next = ptr->next;
            free(ptr);
            return;
        }
        ptr = ptr->next;
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
            deleteend();
            display();
}