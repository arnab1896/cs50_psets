#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main()
{
    /*
    1.take input
    2.check input for long long
    3.check validity of the number
    4.check gateway's name*/

    long long x,n;
    int i,j, t1, t2, sum;
    
    printf ("Number: ");    
    n = get_long_long();
    x = n;
    i = 0;
    
    while ( x != 0 )
    {
        x = x/10;
        i ++;
    }
    
    x = n;
    sum = 0;
    //finding sum of alternate digits*2
    for ( j = 1; j <= (i+1)/2 ; j++)
    {
        t1 = x % 100;
        t2 = t1 / 10;
        
        if ( t2 < 5 )
        {
            sum = sum + t2*2;
        }
        else
        {
            sum = sum + (t2*2)%10 + 1;
        }
        
        x = x / 100;
    }
    //finding sum of remaining digits
    x = n;
    for ( j = 1 ; j <= (i+1)/2 ; j ++ )
    {
        t1 = x % 10;
        sum = sum + t1;
        x = x / 100;
    }
    
    if ( sum % 10 == 0 )
    {
        //card is valid
        
        //extract first 2 digits
        x = n;
        j = i - 2;
        while ( j != 0 )
        {
            x = x / 10;
            j --;
        }
        
        if ( (x == 34) || (x == 37) )
            printf("AMEX\n");
        else if ( (x == 51) || (x == 52) || (x == 53) || (x == 54) || (x == 55) )
            printf("MASTERCARD\n");
        else if ( (x/10) % 10 == 4 )
            printf("VISA\n");
    }
    else
    printf("INVALID\n");
    
    return 0;
}