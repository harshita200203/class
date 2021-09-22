#include <stdio.h>

int main()
{
    char str[20];
    scanf("%s",str);
    printf("%s",str);
    
    toupper(str);
    printf("%s",str);
    
    tolower(str);
    printf("%s",str);
    

    return 0;
}

  void toupper(char*ptr)
   {
       while (*ptr!='10')
       {
           if (*ptr>='a'&& ptr <='z')
               *ptr = *ptr-('a'-'A');
               
               
                 ptr++;
       }
   }
       
       
   void tolower(char*ptr)
    {
        while (*ptr!='10')
        {
            if (*ptr>='a'&& ptr <='z')
               *ptr = *ptr-('a'-'A');
               
               
                 ptr++;
        }
        
    }
       
