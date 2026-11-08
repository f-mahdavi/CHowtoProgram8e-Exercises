 // Body Mass Index Calculator
 #include <stdio.h>

int main( void )
 {
 printf( "Enter weight In Kilograms and height In Meters: " ); // prompt

float w, h; // declare variables
 scanf( "%f%f", &w , &h); // read integers

 float bmi=(w/(h*h));

 printf( "bmi:%.2f\n" , bmi); // prompt

 printf( "BMI VALUES\n"); // prompt
 printf( "Underweight: less than 18.5\n"); // prompt
 printf( "Normal: between 18.5 and 24.9\n"); // prompt
 printf( "Overweight: between 25 and 29.9\n"); // prompt
 printf( "Obese: 30 or greater\n"); // prompt

 return 0;
 } // end function main
