/***********************************************************************
* Program:
*    Lab C_lab, ECEN 324 Learning C Lab
*    Brother Allred, ECEN 324
* Author:
*    Brodric Young
* Summary:
*    Changing C++ code into C code to print of various items.
************************************************************************/

#include <stdio.h>
#include <stdlib.h>

#define PI 3.1415926

/***********************************************************************
* Print various items (integers, letters, floats), get inputs, and do math 
***********************************************************************/
int main (void)
{
   // Printing various items
 
   const char LETTER = 'A';
   printf("24\n");
   printf("%.5f\n", PI);
   printf("%c\n", LETTER);
 
   float payRate = 10.50;
   int hours = 40;
 
   printf("Users pay rate: $%g\n", payRate);
   printf(" Hours worked: %d\n", hours);
   printf("    Gross Pay: $%g\n", hours * payRate);
 
   // Get input intger and do math with it
   int number;
   fprintf(stderr, "Enter number: ");
   scanf("%d", &number);
   printf("Twice %d is %d\n", number, number * 2);
 
   /*********************************************************************/
   /*********************** Output an Integer ***************************/
   /*********************************************************************/
   int anInt = 99;
   float aFloat = 43.2;
 
   // Output the integer with the default formatting.
   //
   printf("\n");    // output a blank line
   printf("Integer: %d ###\n", anInt);
 
   // Output the integer in a fixed field width of 10, right justified.
   // 
   printf("Integer: %10d ###\n", anInt);
 
   // Output the integer in a fixed field width of 10
   // and left justified in the field.
   //
   printf("Integer: %-10d ###\n\n", anInt);
   
   /*********************************************************************/
   /************************* Output a Float ****************************/
   /*********************************************************************/
 
   // Output the float with the default formatting.
   //
   printf("  Float: %g ###\n", aFloat);
 
   // Output the float in a fixed field width of 10, left justified.
   //
   printf("  Float: %-10g ###\n", aFloat);
 
   // Output the float right justified in a field width of 10 with  
   // a precision of 2 places after the decimal point for the float. 
   //
   printf("  Float: %10.2f ###\n", aFloat);
 
   // Output the float with 3 places of precision after the decimal point but
   // not giving a field width.
   //
   printf("  Float: %.3f ###\n", aFloat);
 
   // Output the float with 3 places of precision after the decimal point with
   // a field width of 10. 
   //
   printf("  Float: %10.3f ###\n", aFloat);

   // Output the float with 4 places of precision after the decimal point with 
   // a feild width of 10
   //
   printf("  Float: %-10.4f ###\n\n", aFloat);
 
   /*********************************************************************
    *************** Table of numbers 97 to 122 (base 10) in different bases ******************
    *********************************************************************/

   printf("\tOct   Dec   Hex   Char\n");
   printf("\t----------------------\n");

   // loop through the numbers 97 up to and including 122 and print that number in octal, decimal, hex, and the ascii character
   for (int i = 97; i < 123; i++) {
      printf("\t%-5o %-5d %-5x %c\n", i, i, i, i);
   }
   printf("\n");

   /*********************************************************************
    *************** Creating and displaying pointers *****************
    *********************************************************************/
 
   int *p1;
   int *p2;

 // allocate memory and verify its not null
   p1 = (int *)malloc(sizeof(int));
   if (p1 == NULL) {
      printf("Memory allocation failed.\n");
      return 1;
   }
   *p1 = 42;
   p2 = p1;
   printf("*p1 == %d\n", *p1);
   printf("*p2 == %d\n", *p2);
 
   *p2 = 53;
   printf("*p1 == %d\n", *p1);
   printf("*p2 == %d\n", *p2);
 
// allocate memory and verify its not null
   p1 = (int *)malloc(sizeof(int));
   if (p1 == NULL) {
      printf("Memory allocation failed.\n");
      return 1;
   }
   *p1 = 88;
   printf("*p1 == %d\n", *p1);
   printf("*p2 == %d\n", *p2);
 
   printf("Hope you got the point of this example!\n");
 
// free memory held by pointers
   free(p1);
   free(p2);

   return 0;
}

