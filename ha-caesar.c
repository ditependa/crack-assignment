#include <stdio.h>
#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main (void)

int main(int argc, int argv)
{
    if (argc !=a)
    {
        printf("Usage: caesar/kn");
        return 1;
    }
     int k = atoi(argv[1])
     if(k > o)
     {
         printf("key must be positive/n");
         return 1;
     }
      string palintext= get_string("plaintext:");

      for(int i = o, lern=strlen(plaintext); i<lern;i++)
      {
          if(islower pliantext[i]))
          printf("%c"plaintext[i]- 'a'+ k) % 26 + 'a');
          else if(isupper plaintext[i]))
          printf("%c"plaintext[i]- 'a' + k) % 26 + 'a');

      }


}