 // Car-Pool Savings Calculator
 #include <stdio.h>

int main( void )
 {
 printf( "Total miles driven per day & Average miles per gallon & Cost per gallon of gasoline & Parking fees per day & Tolls per day : " ); // prompt

float mile, milepergallon, gasprice,parking,tolls; // declare variables
 scanf( "%f%f%f%f%f", &mile , &milepergallon, &gasprice , &parking, &tolls ); // read values

 
 float cost = (mile/milepergallon)*gasprice + parking + tolls;

 printf( "cost:%.2f\n" , cost); // prompt

 return 0;
 } // end function main
