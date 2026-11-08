 // Calculate the sum, product, difference, quotient and remainder of two integers
 #include <stdio.h>

int main( void )
 {
 printf( "Enter two integers: " ); // prompt

int x, y; // declare variables
 scanf( "%d%d", &x, &y ); // read two integers

 int product = x * y; // product values
 int sum = x + y; // sum values
 int difference = x - y; // difference values
 int quotient = x / y; // quotient values
 int remainder = x % y; // remainder values

 // display result
 printf( "The product is %d\n", product ); 
 printf( "The sum is %d\n", sum ); 
 printf( "The difference is %d\n", difference ); 
 printf( "The quotient is %d\n", quotient ); 
 printf( "The remainder is %d\n", remainder ); 

 } // end function main