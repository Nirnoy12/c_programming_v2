#include <stdio.h>
#include <ctype.h>

void printInitials(char name[])
{
    if (name[0] == '\0')
        return;

    // Print the first character of the name in uppercase
    printf("%c", toupper(name[0]));

    // Traverse rest of the string and 
    // print the characters after spaces.
    for (int i = 1; name[i] != '\0'; i++)
    {
        if (name[i] == ' ')
            printf(".%c", toupper(name[i + 1]));
    }
}

int main()
{
    char name[100];
    printf("Enter a name: ");
    fgets(name, sizeof(name), stdin);

    printf("Initials: ");
    printInitials(name);

    return 0;
}
