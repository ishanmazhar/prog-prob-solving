#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char a[100]; //= "Ishan Is a boy.";
    printf("Enter: \n");
    fgets(a, sizeof(a), stdin);
    puts(a);
    int count = 0, count1 = 1, n = 0;

    for (int i = 0; i < strlen(a); i++)
    {
        if (a[i] != ' ' && a[i] != '.')
            count++;
    }

    for (int j = 0; j < strlen(a); j++)
    {
        if (a[j] == ' ' && a[j+1] != ' ')
            count1++;
    }


    printf("%s\n", a);
    printf("string length %d\n", strlen(a));
    printf("Number of letters %d\n", count);

    printf("Number of words %d\n", count1);

    // printf("Number of words %d\n", count2);

    return 0;
}
