#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>

int main (int argc, string argv[])
{
    if ( argc != 2)
    {
        printf ("Usage: ./caeser k\n");
        return 1;
    }
    else
    {
        string pt;
        int len;
        int i;
        int k;
        
        printf ("plaintext: ");
        pt = get_string();
        len = strlen( pt );
        k = atoi( argv[1] );
        k = k % 26;
        
        for ( i = 0 ; i < len ; i ++ )
        {
            //if character is between A-Z, rotate around 90
            if ( pt[i] > 64 && pt[i] < 91 )
            {
                pt[i] = ( (pt[i] + k)>90 ? ((pt[i]+k)-26) : pt[i]+k) ;
            }
            
            //if character is between A-Z, rotate around 122
            if ( pt[i] > 96 && pt[i] < 123 )
            {
                pt[i] = ( (pt[i] + k)>122 ? ((pt[i]+k)-26) : pt[i]+k) ;
            }
        }
        
        printf("ciphertext: %s\n",pt);
        
    }
    return 0;
}
