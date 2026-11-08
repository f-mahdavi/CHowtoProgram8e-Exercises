 // Odd or Even
 #include <stdio.h>

int main( void )
 {
 printf( "Enter integer: " ); // prompt

int a; // declare variable
 scanf( "%d", &a ); // read integers

 if (a % 2 == 0)
{
 printf( "a is Even"); // prompt
}
else 
{
 printf( "a is Odd"); // prompt
}


 return 0;
 } // end function main