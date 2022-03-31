#include <stdio.h>

// function that takes a string and print the address of each character
void print_address(char *str)
{
    int i;
    for (i = 0; str[i] != '\0'; i++)
    {
        printf("%p\n", &str[i]);
    }
}

// main function to test the above function
int main()
{
    char str[] = "Hello World";
    print_address(str);
    return 0;
}
