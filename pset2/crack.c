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
        printf ("Usage: ./crack hash\n");
        return 1;
    }
    else
    {
        string hash = argv[1];
        
        char space[62];
        //char permuted[4];
        
        
        int i,j,k,l;
        //int a,b,c,d;
        
        //storing A-Z in array
        for ( i = 65 ; i <= 90 ; i ++ )
        {
            space[i-65] = i;
        }
        //storing a-z in array
        for ( i = 97 ; i <= 122 ; i ++ )
        {
            space[i-71] = i;
        }
        //storing 0-9 in index 52 to 61;
        for ( i = 48 ; i <= 57 ; i ++ )
        {
            space[i+4] = i;
        }
        
        char str[5] = "\0\0\0\0\0";
        
        
        //check hash of 1-letter keys
        for ( i = 0 ; i < 62 ; i ++ )
        {
            str[0] = space[i];
            if ( (hash[2] == (crypt ( str , "50" ))[2]) && (hash[3] == (crypt ( str , "50" ))[3]) && (hash[4] == (crypt ( str , "50" ))[4]) && (hash[5] == (crypt ( str , "50" ))[5]) && (hash[6] == (crypt ( str , "50" ))[6]) && (hash[7] == (crypt ( str , "50" ))[7]) && (hash[8] == (crypt ( str , "50" ))[8]) && (hash[9] == (crypt ( str , "50" ))[9]) && (hash[10] == (crypt ( str , "50" ))[10]) && (hash[11] == (crypt ( str , "50" ))[11]) && (hash[12] == (crypt ( str , "50" ))[12]) )
            {
                printf ("%s\n", str);
                return 0;
            }
        }
        
        //check hash of 2-letter keys
        for ( i = 0 ; i < 62 ; i ++ )
        {
            str[0] = space[i];
            for ( j = 0 ; j < 62 ; j ++ )
            {
                str[1] = space[j];
                if ( (hash[2] == (crypt ( str , "50" ))[2]) && (hash[3] == (crypt ( str , "50" ))[3]) && (hash[4] == (crypt ( str , "50" ))[4]) && (hash[5] == (crypt ( str , "50" ))[5]) && (hash[6] == (crypt ( str , "50" ))[6]) && (hash[7] == (crypt ( str , "50" ))[7]) && (hash[8] == (crypt ( str , "50" ))[8]) && (hash[9] == (crypt ( str , "50" ))[9]) && (hash[10] == (crypt ( str , "50" ))[10]) && (hash[11] == (crypt ( str , "50" ))[11]) && (hash[12] == (crypt ( str , "50" ))[12]) )
                {
                    printf ("%s\n", str);
                    return 0;
                }
            }
        }
        
        //check hash of 3-letter keys
        for ( i = 0 ; i < 62 ; i ++ )
        {
            str[0] = space[i];
            for ( j = 0 ; j < 62 ; j ++ )
            {
                str[1] = space[j];
                for ( k = 0 ; k < 62 ; k ++ )
                {
                    str[2] = space[k];
                    if ( (hash[2] == (crypt ( str , "50" ))[2]) && (hash[3] == (crypt ( str , "50" ))[3]) && (hash[4] == (crypt ( str , "50" ))[4]) && (hash[5] == (crypt ( str , "50" ))[5]) && (hash[6] == (crypt ( str , "50" ))[6]) && (hash[7] == (crypt ( str , "50" ))[7]) && (hash[8] == (crypt ( str , "50" ))[8]) && (hash[9] == (crypt ( str , "50" ))[9]) && (hash[10] == (crypt ( str , "50" ))[10]) && (hash[11] == (crypt ( str , "50" ))[11]) && (hash[12] == (crypt ( str , "50" ))[12]) )
                    {
                        printf ("%s\n", str);
                        return 0;
                    }
                }
            }
        }
        
        
        //check hash of 4-letter keys
        for ( i = 0 ; i < 62 ; i ++ )
        {
            str[0] = space[i];
            for ( j = 0 ; j < 62 ; j ++ )
            {
                str[1] = space[j];
                for ( k = 0 ; k < 62 ; k ++ )
                {
                    str[2] = space[k];
                    for ( l = 0 ; l < 62 ; l ++ )
                    {
                        str[3] = space[l];
                        if ( (hash[2] == (crypt ( str , "50" ))[2]) && (hash[3] == (crypt ( str , "50" ))[3]) && (hash[4] == (crypt ( str , "50" ))[4]) && (hash[5] == (crypt ( str , "50" ))[5]) && (hash[6] == (crypt ( str , "50" ))[6]) && (hash[7] == (crypt ( str , "50" ))[7]) && (hash[8] == (crypt ( str , "50" ))[8]) && (hash[9] == (crypt ( str , "50" ))[9]) && (hash[10] == (crypt ( str , "50" ))[10]) && (hash[11] == (crypt ( str , "50" ))[11]) && (hash[12] == (crypt ( str , "50" ))[12]) )
                        {
                            printf ("%s\n", str);
                            return 0;
                        }
                    }
                }
            }
        }
    }
    return 0;
}