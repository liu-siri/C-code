#include<stdio.h>

int GCD(int a , int b );

int main()
{
    int        a , b ;
    
    scanf("%d%d", &a , &b );
    printf( "%d\n" , GCD( a, b ) ) ;
     
    return 0 ;    
}




int GCD(int a , int b )
{
    if(a%b!=0)
    {
        return GCD(b,a%b);
    }
    else
    {
        return b;
    }
}
