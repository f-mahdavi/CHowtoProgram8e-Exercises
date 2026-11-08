 // Converting from seconds to hours, minutes and seconds
 #include <stdio.h>

int main( void )
 {
 printf( "Enter total time elapsed, in seconds: " ); // prompt

int sec,hr,min; // declare variables
 scanf( "%d", &sec ); // read integers

 hr =sec/3600;
 min =(sec % 3600)/60;
 sec =(sec % 3600)% 60;
  

printf( " %d:%d:%d\n", hr,min,sec ); // prompt


 return 0;
 } // end function main