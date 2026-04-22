#include <stdio.h>
int main ()
{
    char str [10];
    int index;
    printf("Enter the string:");
    scanf("%s",str);
    for (index = 0; str[index] != 0 ; index++) printf("%d",index);
    printf("The lenght of string is : %d\n", index);
    
    return 0;
}