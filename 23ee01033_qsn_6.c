#include <stdio.h>
#include <string.h>

void count(char string[]);
int main()
{
    char string[100];
    printf("Enter String : ");
    gets(string);
    count(string);
    return 0;
}

void count(char string[])
{
    char *p_string = string; 
    int vowel = 0, consonant = 0;
    while (*p_string != '\0')
    {
        if ( *p_string == 'A' || *p_string == 'E' || *p_string == 'I' || *p_string == 'O' || *p_string == 'U' || *p_string == 'a' || *p_string == 'e' || *p_string == 'i' || *p_string == 'o' || *p_string == 'u') 
            vowel++;
        else
            consonant++;

        p_string ++;
    }
    
    printf("Count of Vowels : %d\n",vowel);
    printf("Count of Consonants : %d\n",consonant);
}