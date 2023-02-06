#include <stdio.h>

char stack[10];
int top = -1;
int n = 10;

char pop()
{
    if (top == -1)
    {
        // printf("Stack Underflow\n");
        return;
    }
    int value = stack[top];
    top--;
    return value;
}

void push(char x)
{
    if (top >= n + 1)
    {
        // printf("Stack Overflow\n");
        return;
    }
    top++;
    stack[top] = x;
}

void main()
{
    char str[10], rev[10];
    int i = 0;

    printf("Enter some text: ");
    gets(str);

    while (str[i] != '\0')
    {
        push(str[i]);
        i++;
    }

    i = 0;

    while (top != -1)
    {
        rev[i] = pop();
        i++;
    }

    printf("Reversed string is: ");
    puts(rev);
}
