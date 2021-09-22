
#include <stdio.h>

void tolowercase (char *c)
{
    if (*c>='A' && *c<='Z'){
        *c=*c+('a'-'A');
        printf("the letter in tolowercase is %c", *c);
        
    }
      else 
      {
          printf ("the letter is already in tolowercase");
          
      }
}
    
    int main()
{
    
    char a;
    scanf("%c",&a);
    tolowercase (&a);
    
    printf ("\n %d, a");
    return(0);
    
}




