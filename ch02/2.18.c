 // Comparing Values
 #include <stdio.h>

int main( void )
 {
 printf( "Enter highest rainfall ever in one season for a country, and the rainfall in the current year for that country: " ); // prompt

int c, h; // declare variables
 scanf( "%d%d", &h, &c ); // read integers

 if (c > h)
{
 printf( "current rainfall is exceed from highest raingfall" ); // prompt
 h = c;
}
 
 return 0;
 } // end function main