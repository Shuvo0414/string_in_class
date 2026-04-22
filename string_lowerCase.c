#include <stdio.h>
#include <ctype.h>

int main ()
{
    char str[] = "JBREC";

    for (int i = 0; str[i] != '\0'; i++)
    {
        str[i] = tolower(str[i]);
    }

    printf("The lowercase is : %s\n", str);

    return 0;
}