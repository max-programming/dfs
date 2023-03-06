#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
} *start = NULL;

void insert_front(int value)
{
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));

    new_node->data = value;
    new_node->next = start;

    start = new_node;
}

void display()
{
    struct Node *pre = start;

    while (pre != NULL)
    {
        printf("%d->", pre->data);
        pre = pre->next;
    }

    printf("NULL\n");
}

void delete_last()
{
    struct Node *pre = start;

    while (pre->next->next != NULL)
    {
        pre = pre->next;
    }

    free(pre->next->next);
    pre->next = NULL;
}

void main()
{
    int choice, value;

    do
    {
        printf("1 - Insert Front, 2 - Delete Last, 3 - Display: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter a value: ");
            scanf("%d", &value);
            insert_front(value);
            break;

        case 2:
            delete_last();
            break;

        case 3:
            display();
            break;

        default:
            choice = 4;
            break;
        }
    } while (choice != 4);
}
