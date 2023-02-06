#include <stdio.h>

int q[5], f = -1, r = -1, max;

void insert()
{
    // Check for overflow
    if (r == max - 1)
    {
        printf("Queue Overflow\n");
        return;
    }

    int v;
    printf("Enter value to insert: ");
    scanf("%d", &v);

    if (f == -1 && r == -1)
        f = 0, r = 0;
    else
        r++;

    q[r] = v;
}

void del()
{
    if (f == -1)
    {
        printf("Queue Underflow\n");
        return;
    }
    printf("Element to delete: %d", q[f]);
    f++;
}

void display()
{
    for (int i = f; i <= r; i++)
    {
        printf("%d\n", q[i]);
    }
}

void main()
{
    int choice;
    printf("Enter the size of queue: ");
    scanf("%d", &max);

    do
    {
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            insert();
            break;
        case 2:
            del();
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
