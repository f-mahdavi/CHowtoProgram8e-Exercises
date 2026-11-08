 // Multiples
 #include <stdio.h>

int main( void )
 {
 printf( "Enter two integers: " ); // prompt

int a, b; // declare variables
 scanf( "%d%d", &a, &b); // read integers

 if (a % b ==0)
{
 printf( "%d is multiple %d\n", a , b ); // prompt
}
else 
{
 printf(  "%d is not multiple %d\n", a , b ); // prompt
}

 
 return 0;
 } // end function main