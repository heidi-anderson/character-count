#include "a0003.h"

// your function goes here

int countCharacters(string phrase, char chara)
{
   int len, i;
   int numChar = 0;

   len = int(phrase.size());

   
    for(i = 0; i < len; i++)
    {
        if (tolower(phrase.at(i)) == chara || toupper(phrase.at(i)) == chara)
        {
            numChar = numChar + 1;
        }
    }
   
    return numChar;
}