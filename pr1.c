#include <stdio.h>

int n = 5;
int arr[5];

void print()
{
    for (int i = 0; i < n; i++)
    {
        printf("%d :- %d\n", i, arr[i]);
    }
}

void insert()
{
    int j, d, i;
    printf("Enter Index of number to be Inserted:");
    scanf("%d", &j);
    printf("Enter Number to be Inserted:");
    scanf("%d", &d);
    for (i = n - 1; i >= j; i--)
    {
        arr[i + 1] = arr[i];
    }
    n++;
    arr[j] = d;
    print();
}

void delete()
{
    int j, i;
    printf("Enter Index of number to be deleted:");
    scanf("%d", &j);
    for (i = j; i < n; i++)
    {
        arr[i] = arr[i + 1];
    }
    n--;
    print();
}

void search()
{
    int d, i, f = 0;
    printf("Enter Element to be Searched:");
    scanf("%d", &d);
    for (i = 0; i < n; i++)
    {
        if (d == arr[i])
        {
            printf("The Index No. of Element is %d\n", i);
        }
    }
    if (f == 0)
    {
        printf("");
    }
}

void replace()
{
    int j, d;
    printf("Enter Index of number to be replaced:");
    scanf("%d", &j);
    printf("Enter Number to be replaced:");
    scanf("%d", &d);
    arr[j] = d;
    print();
}

void main()
{
    int ch, m;
    for (int i = 0; i < 5; i++)
    {
        printf("Enter Element:");
        scanf("%d", &arr[i]);
    }

    while (m != 0)
    {
        printf("Enter your Choice:- \n 1)Print \n 2)Insert \n 3)Delete \n 4)Search \n 5)Replace \n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            print();
            break;

        case 2:
            insert();
            break;

        case 3:
            delete();
            break;

        case 4:
            search();
            break;

        case 5:
            replace();
            break;

        default:
            printf("Invalid Choice");
            break;
        }
        printf("Enter 0 to stop and press any number to continue");
        scanf("%d", &m);
    }
}
