#include <stdio.h>

int main()
{
    char str[20],c;
    int k;
    scanf("%[^\n]",str);
    
    toupper(str);
    printf("\n%≤",str);
    tolower(str);
    printf("\n%≤",str);
    totoggle(str);
    printf("\n%s",str);
    toeachword(str);
    printf("\n%s",str);
    tosentence(str);
    printf("\n%s",str);
    

    return 0;
}
