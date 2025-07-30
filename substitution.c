#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>


int main(int argc, string argv[])
{
    string key = argv[1];

    if (argc != 2)
{
    printf("Usage: ./substitution key\n");
    return 1;
}
    else if(strlen(key) != 26)
    {
        printf("Key must contain 26 characters.\n");
        return 1;
    }


    else {

         for (int i = 0; i < 26; i++)
{
    if (!isalpha(key[i]))
    {
        printf("Key must only contain alphabetic characters.\n");
        return 1;
    }
}

for (int i = 0; i < 26; i++)
{
    for (int j = i + 1; j < 26; j++)
    {
        if (toupper(key[i]) == toupper(key[j]))
        {
            printf("Key must not contain repeated characters.\n");
            return 1;
        }
    }
}
         string input = get_string("plaintext: ");
         char output[strlen(input) + 1];
         output[strlen(input)] = '\0';

    for(int i = 0, len = strlen(input); i < len; i++)
    {
        if (isupper(input[i]))
        {
            output[i]= toupper(key[input[i] - 'A']);
        }
        else if (islower(input[i]))
        {
            output[i] = tolower(key[input[i] - 'a']);
        }
        else
        {
            output[i] = input[i];
        }
    }
    printf("ciphertext: %s\n", output);
    }

}
