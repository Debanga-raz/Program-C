#include<string.h>
int main()
{
    int age;
    char Name[100];

    printf("Welcome to ECI, What is your name?\n>");
    scanf("%s", &Name);

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("\n\n")

    if (18 < age)
    {
        printf("%s,you are Elgible",Name);
    }
    if (18 == age)
    {
        printf("%s,you are Elgible",Name);
    }
    
    
    else
    {
        printf("%s,you are not elgible",Name);
    }

    printf("\n\nThanks For using us");
}   