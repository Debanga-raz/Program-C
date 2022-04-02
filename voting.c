#include<string.h>
int main()
{
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    if (18 < age)
    {
        printf("You are Elgible");
    }
    if (18 == age)
    {
        printf("You are elgible");
    }
    
    
    else
    {
        printf("You are not Elgible");
    }

    printf("\n\nThanks For using us");
}   