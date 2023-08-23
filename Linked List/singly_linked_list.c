/*singly linked list*/

#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
} NODE;

void createlist(NODE *head)
{
    int i, n, count;
    NODE *last, *newnode;
    printf("\nEnter how many nodes:");
    scanf("%d", &n);
    last = head;
    for (count = 1; count <= n; count++)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        newnode->next = NULL;
        printf("\nEnter data in node:");
        scanf("%d", &newnode->data);
        last->next = newnode;
        last = newnode;
    }
}
void display(NODE *head)
{
    NODE *temp;
    for (temp = head->next; temp != NULL; temp = temp->next)
        printf("%d\t", temp->data);
}

void main()
{
    int n, choice;
    NODE *head;
    head = (struct node *)malloc(sizeof(struct node));
    head->next = NULL;
    do
    {
        printf("\n1.CREATE");
        printf("\n2.DISPLAY");
        printf("\n3.EXIT");
        printf("\nEnter your choice:");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            createlist(head);
            break;
        case 2:
            display(head);
            break;
        case 3:
            exit(0);
        default:
            printf("\nInvalid Choice");
        }
    } while (choice != 3);
}