#include <stdio.h>

int q[5], f = -1, r = -1, max;

void insert()
{
    // Check for overflow
    if (r == max - 1 && f == 0)
    {
        printf("Queue Overflow\n");
        return;
    }

    int v;
    printf("Enter value to insert: ");
    scanf("%d", &v);

    if (f == -1 && r == -1)
        f = 0, r = 0;
    else if (r == max - 1 && f != 0)
        r = 0;
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
    int v = q[f];
    if (f == r)
        f = -1, r = -1;
    else if (f == max - 1)
        f = 0;
    else
        f++;
    printf("Element to delete: %d", v);
}

void display()
{
    if (f <= r)
    {
        for (int i = f; i <= r; i++)
        {
            printf("%d\n", q[i]);
        }
    }
    else
    {
        for (int i = 0; i <= r; i++)
        {
            printf("%d\n", q[i]);
        }
        for (int i = f; i < max; i++)
        {
            printf("%d\n", q[i]);
        }
    }
}

void main()
{
    int choice;
    printf("Enter the size of queue (not greater than 5): ");
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
