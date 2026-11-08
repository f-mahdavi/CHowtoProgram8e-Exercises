 // Separating Digits in an Integer
 #include <stdio.h>

int main( void )
 {
 printf( "Enter one five-digit number: " ); // prompt

int a; // declare variable
 scanf( "%d", &a ); // read integer


 printf( "%d   %d   %d   %d   %d\n", a/10000 , (a % 10000)/1000 , ((a % 10000)%1000)/100, (((a % 10000)%1000)%100)/10 , (((a % 10000)%1000)%100)%10); // prompt

 
 return 0;
 } // end function main
