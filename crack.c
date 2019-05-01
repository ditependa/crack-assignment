#define _XOPEN_SOURCE
#include<unistd.h>
#include<stdio.h>
#include<string.h>
#include<cs50.h>

int main (int argc, string argv [] )
{
    if(argc != 2)
    {

        printf("Usage: crack <hash>\n");
        return 1;

    }

    const int letters_count = 53;
    string letters ="\0abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string hash =argv[1];

    char salt[3];
    memcpy(salt, hash, 2);
    salt[2] = '\0';

    char key_oumou[6] = "\0\0\0\0\0\0";

  for(int i = 0; i < letters_count; i++)
  {
  for(int l = 0; l < letters_count; l++)
  {
  for(int s = 0; s < letters_count; s++)
  {
  for(int p = 0; p < letters_count; p++)
  {
  for(int b = 0; b <letters_count; b++)
  {
   key_oumou[0] = letters[i];
   key_oumou[1] = letters[l];
   key_oumou[2] = letters[s];
   key_oumou[3] = letters[p];
   key_oumou[4] = letters[b];
   if(strcmp(crypt(key_oumou, salt), hash) == 0)
   {
    printf("%s\n",key_oumou);
    return 0;
   }
   }
   }
   }
   }
   printf("the password couldn't be cracked\n");
   return 2;
   }
}



