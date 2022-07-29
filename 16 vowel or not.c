#include <stdio.h>

int main()
{
    char c;
    printf("\nENTER THE CHARACTER: ");
    scanf("%c",&c);

    switch (c)
    {
    case 'a':
        printf("\n%c is a vowel",c);
        break;

    case 'e':
        printf("\n%c is a vowel",c);
        break;

    case 'i':
        printf("\n%c is a vowel",c);
        break;

    case 'o':
        printf("\n%c is a vowel",c);
        break;

    case 'u':
        printf("\n%c is a vowel",c);
        break;


    default:
        printf("\n%c is not a vowel",c);

    }
    return 0;
}
