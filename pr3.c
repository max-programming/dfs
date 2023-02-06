#include <stdio.h>

int stack[5];
int top = -1;
int n = 5;

void display()
{
    for (int i = 0; i < top + 1; i++)
    {
        printf("%d\n", stack[i]);
    }
}

int pop()
{
    if (top == -1)
    {
        printf("Stack Underflow\n");
        return -1;
    }
    int value = stack[top];
    top--;
    return value;
}

int peep()
{
    if (top == -1)
    {
        printf("Stack Underflow\n");
        return -1;
    }
    return stack[top];
}

void push(int x)
{
    if (top >= n + 1)
    {
        printf("Stack Overflow\n");
        return;
    }
    top++;
    stack[top] = x;
}

void main()
{
    int choice, x, removed_element, topmost;

    do
    {
        printf("Enter a number: \n1. Display\n2. Add\n3. Remove Topmost\n4. Display Topmost\n> ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            display();
            break;

        case 2:
            printf("Enter element to add: ");
            scanf("%d", &x);
            push(x);
            break;

        case 3:
            removed_element = pop();
            printf("Removed element was %d\n", removed_element);
            break;

        case 4:
            topmost = peep();
            printf("Topmost element is %d\n", topmost);
            break;

        default:
            break;
        }
    } while (choice != 0);
}
