#include <stdio.h>

struct Student
{
    char enrollment_number[15], name[20];
    float marks1, marks2, marks3, avg;
};

void show_output(struct Student s)
{
    printf("Enrollment Number - %s\n", s.enrollment_number);
    printf("Name - %s\n", s.name);
    printf("Marks 1 - %.2f\n", s.marks1);
    printf("Marks 2 - %.2f\n", s.marks2);
    printf("Marks 3 - %.2f\n", s.marks3);
    printf("Average Marks - %.2f\n", s.avg);
}

void main()
{
    struct Student students[3];

    for (int i = 0; i < 3; i++)
    {
        struct Student s = students[i];

        printf("\nEnter details for student %d\n", i + 1);

        printf("Enter your enrollment number: ");
        scanf("%s", &s.enrollment_number);

        printf("Enter your name: ");
        scanf("%s", &s.name);

        printf("Enter marks 1: ");
        scanf("%f", &s.marks1);

        printf("Enter marks 2: ");
        scanf("%f", &s.marks2);

        printf("Enter marks 3: ");
        scanf("%f", &s.marks3);

        s.avg = (s.marks1 + s.marks2 + s.marks3) / 3;

        show_output(s);
    }
}
