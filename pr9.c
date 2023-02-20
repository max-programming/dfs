#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
} *start = NULL;

int count = 0;
void insert()
{
    int value;
    struct Node *last = start;

    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));

    printf("Enter data: ");
    scanf("%d", &value);

    new_node->data = value;
    new_node->next = NULL;

    count++;

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

void display()
{
    struct Node *last = start;

    while (last != NULL)
    {
        printf("%d->", last->data);
        last = last->next;
    }

    printf("NULL\n");
    printf("Number of nodes are %d\n", count);
}

void main()
{
    int choice;
    do
    {
        printf("Enter a choice. 1. Insert, 2. Display.\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            insert();
            break;

        case 2:
            display();
            break;

        default:
            break;
        }
    } while (choice != 6);
}
