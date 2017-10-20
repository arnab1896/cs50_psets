#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main ()
{
    int len, x, i;
    string ri;
    
    //get input string
    ri = get_string();
    //find length of string
    len = strlen(ri);
    x = 1;
    
    //remember that ASCII of ' ' is = 32
    
    if (ri[0] != ' ')
    {
        printf("%c",((int)ri[0]<91)? ri[0] : (int)ri[0] - 32 );
        x = 0;
    }
    
    for ( i = ((x == 0)? 1 : 0) ; i < (len-1) ; i ++)
    {
        if ( (int)ri[i] == 32 && (int)ri[i+1] != 32 )
        {
            if ( (int)ri[i+1] > 96 )
                printf("%c", (int)ri[i+1] - 32);
            else
                printf("%c", ri[i+1]);
        }
    }
    
    
    printf("\n");
    return 0;
}