#include <stdio.h>
int main ()
{
    char str1 [10], str2[20];
    int index;
    printf("Enter the string\n");
    scanf("%s", str1);
    for ( index = 0; str1[index] != '\0'; index++)
    str2[index]=str1[index];
    str2[index]='\0';
    printf("string is : %s\n", str1);
    printf("String is : %s\n", str2);
    
    return 0;
}