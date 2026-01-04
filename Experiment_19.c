#include <stdio.h>
#include <string.h>

int main() {
    char str1[50], str2[50], str3[100];

    printf("Enter first string: ");
    gets(str1);

    printf("Enter second string: ");
    gets(str2);

    printf("\nLength of first string = %lu", strlen(str1));
    printf("\nLength of second string = %lu", strlen(str2));

    strcpy(str3, str1);
    printf("\n\nAfter strcpy, str3 = %s", str3);

    strcat(str3, str2);
    printf("\nAfter strcat, str3 = %s", str3);

    if(strcmp(str1, str2) == 0)
        printf("\n\nStrings are equal");
    else
        printf("\n\nStrings are not equal");

    return 0;
}