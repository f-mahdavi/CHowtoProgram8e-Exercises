 // Arithmetic, Largest Value and Smallest Value
 #include <stdio.h>

int main( void )
 {
 printf( "Enter three different integers: " ); // prompt

int a, b, c; // declare variables
 scanf( "%d%d%d", &a, &b, &c ); // read integers

 int sum =a+b+c;
 int avg =(a+b+c)/3;
 int prd =a*b*c;

printf( "Sum is %d\n", sum ); // prompt
printf( "Average is %d\n", avg ); // prompt
printf( "Product is %d\n", prd ); // prompt

 if (a > b && a > c)
{
 printf( "Largest is %d\n", a ); // prompt
}
else if (b > a && b > c)
{
 printf( "Largest is %d\n", b ); // prompt
}
else if (c > a && c > b)
{
 printf( "Largest is %d\n", c ); // prompt
}


 if (a < b && a < c)
{
 printf( "Smallest is %d\n", a ); // prompt
}
else if (b < a && b < c)
{
 printf( "Smallest is %d\n", b ); // prompt
}
else if (c < a && c < b)
{
 printf( "Smallest is %d\n", c ); // prompt
}


 
 return 0;
 } // end function main