/*All Stack operations such that init, push, pop, peek, isfull, isempty,etc. */
// read carefully and execute.
#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
// #include "ststack.h"
#define MAX 15

char name[MAX], top;

void init()
{
    top = -1;
    printf("\nStatic Stack Initiaized\n");
}

void push()
{
    if (top == MAX - 1)
    {
        printf("\nStatic Stack is full\n");
    }
    else
    {
        top++;
        printf("Enter a character to be push:");
        scanf(" %c", &name[top]);
    }
}

void pop()
{
    if (top == -1)
    {
        printf("\nStatic Stack is empty\n");
    }
    else
    {
        printf("Poped value is:%c", name[top]);
        top--;
    }
}

void peek()
{
    if (top == -1)
    {
        printf("\nStatic Stack is empty\n");
    }
    else
    {
        printf("Character at top is:%c", name[top]);
    }
}

int isempty()
{
    if (top == -1)
    {
        printf("\nStatic Stack is empty\n");
    }
    else
    {
        printf("\nStatic Stack is not empty\n");
    }
}

int isfull()
{
    if (top == MAX - 1)
    {
        printf("\nStatic Stack is full\n");
    }
    else
    {
        printf("\nStatic Stack is not full\n");
    }
}
int main()
{
    int ch;
    do
    {
        printf("\n-----Static Stack of characters-----\n");
        printf("\n1.Init\n");
        printf("2.Push\n");
        printf("3.Pop\n");
        printf("4.Peek\n");
        printf("5.IsEmpty\n");
        printf("6.IsFull\n");
        printf("7.Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            init();
            break;
        case 2:
            push();
            break;
        case 3:
            pop();
            break;
        case 4:
            peek();
            break;
        case 5:
            isempty();
            break;
        case 6:
            isfull();
            break;
        case 7:
            exit(0);
            // default:printf("Invalid Choice");
        }
    } while (ch != 7);
}