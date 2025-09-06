#include<stdio.h>

struct person
    {
        int age;
        char FirstName[20];
        char LastName[20];

    };

int main()
{
    struct person x;
    printf("enter your first name: ");
    scanf("%s", x.FirstName);
    printf("enter your last name: ");
    scanf("%s", x.LastName);
    printf("enter your age: ");
    scanf("%d", &x.age);
    printf("your name is %s %s and your age is %d", x.FirstName, x.LastName, x.age);
   
    
}