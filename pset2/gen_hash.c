#include <stdio.h>
#include <cs50.h>
#include <string.h>
#define _XOPEN_SOURCE
#include <unistd.h>
#include <crypt.h>

int main (int argc, string argv[])
{
    if ( argc != 2)
    {
        printf ("Usage: ./crack key_to_be_hashed\n");
        return 1;
    }
    else
    {
        printf ("%s", crypt ( argv[1] , "50" ) );
    }
}