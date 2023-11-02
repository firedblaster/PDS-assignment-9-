#include <stdio.h>
#include <string.h>

int len(char str[]);

int main()
{
    char str[100];
    printf("Enter String : ");
    gets(str);

    int length = len(str);

    printf("The Number of Characters(including space) is %d\n",length);
    return 0;
}

int len(char str[])
{
    char *p_str = str; 
    int len = 0;
    while (*p_str != '\0')
    {
        len ++;
        p_str ++;
    }
    return len;
}