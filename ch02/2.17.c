 // Calculate the final velocity, v, and distance traversed, s
 #include <stdio.h>

int main( void )
 {
 printf( "Enter u , a , t: " ); // prompt

int u, a, t; // declare variables
 scanf( "%d%d", &u, &a, &t ); // read three integers

 int v = u + a*t; // final velocity
 int s = u*t + ((a*t*t)/2) ; // distance traversed

 // display result
 printf( "The velocity is %d\n", v ); 
 printf( "The distance is %d\n", s ); 
 
 return 0;
 } // end function main