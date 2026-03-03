#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};
typedef struct node node;

node *head = NULL;

void create()
{
    node *tmp, *ptr;
    char ch = 'y';

    while(ch == 'y' || ch == 'Y')
    {
        tmp = (node*)malloc(sizeof(node));
        if(tmp == NULL)
        {
            printf("Memory not allocated.\n");
            return;
        }

        printf("Enter the data: ");
        scanf("%d", &tmp->data);
        tmp->next = NULL;

        if(head == NULL)          // first node
        {
            head = tmp;
        }
        else                      // baaki nodes list ke end me
        {
            ptr = head;
            while(ptr->next != NULL)
                ptr = ptr->next;
            ptr->next = tmp;
        }

        printf("Add another node? (y/n): ");
        scanf(" %c", &ch);        // space to skip previous newline
    }
}

void display()
{
    node *ptr;
    if(head == NULL)
    {
        printf("List is empty.\n");
        return;
    }

    printf("Linked list elements: ");
    ptr = head;
    while(ptr != NULL)
    {
        printf("%d -> ", ptr->data);
        ptr = ptr->next;
    }
    printf("NULL\n");
}

int main()
{
    create();
    display();
    return 0;
}