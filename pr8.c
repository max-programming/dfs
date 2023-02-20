#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
} *start = NULL;

void insert_front()
{
    int value;

    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));

    printf("Enter data to insert at front: ");
    scanf("%d", &value);

    new_node->data = value;
    new_node->next = start;

    start = new_node;
}

void insert_end()
{
    int value;
    struct Node *last = start;

    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));

    printf("Enter data to insert at end: ");
    scanf("%d", &value);

    new_node->data = value;
    new_node->next = NULL;

    if (start == NULL)
    {
        start = new_node;
    }

    else
    {
        while (last->next != NULL)
        {
            last = last->next;
        }

        last->next = new_node;
    }
}

void delete_front()
{
    if (start == NULL)
    {
        printf("Underflow\n");
        return;
    }
    struct Node *ptr = start;
    start = start->next;
    free(ptr);
}

void delete_end()
{
    if (start == NULL)
    {
        printf("Underflow\n");
        return;
    }
    struct Node *last = start;
    struct Node *pre = start;

    while (last->next != NULL)
    {
        pre = last;
        last = last->next;
    }

    pre->next = NULL;
    free(last);
}

void display()
{
    struct Node *last = start;

    while (last != NULL)
    {
        printf("%d->", last->data);
        last = last->next;
    }

    printf("NULL\n");
}

void main()
{
    int choice;
    do
    {
        printf("Enter a choice. 1. Insert Front, 2. Insert End. 3. Delete Front. 4. Delete End. 5. Display\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            insert_front();
            break;

        case 2:
            insert_end();
            break;

        case 3:
            delete_front();
            break;

        case 4:
            delete_end();
            break;

        case 5:
            display();
            break;

        default:
            break;
        }
    } while (choice != 6);
}
