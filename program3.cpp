//Mike Blanchard
//Program 3
//Create a program with a function named Repower, which takes parameters J and K, and solves J to the K power. 
//Due 4-15-20

#include <iostream>
#include <math.h>
using namespace std;

//Repower function to calculate J to the K 
double Repower (int j, int k){
   if (k == 0){
     //returns 1
   return 1;
   }
   else if (k == 1){
     //returns j
   return j;
   }
   else if (k > 1){
     //returns the same function to get the answer
   return j*Repower(j,k-1);
   }
   else if (k < 0){
      //returns the function is k is negative
   return 1/Repower(j,-k); 
   }
}

//main function
int main (void){
//declare variables
   int i = 1;
   int base, exponent;
   char ans;
  
   cout << "Welcome to the Exponentiation Calulator" << endl;
   
//Master while loop to control the game 
   while (i != 0){
//prompt user to enter the numbers to compute
      cout << "Enter two values, with digits 0-9, to compute." << endl;
      cout << "==============================================" << endl;
      cout << "Enter a base number: ";
      cin >> base;
      cout << "Enter an exponent: ";
      cin >> exponent;

      //tests for a positive base
      while(base < 0){
      cerr << "Enter a positive base number." << endl;
      cout << "==============================================" << endl;
      cout << "Enter a base number: ";
      cin >> base;
      cout << "Enter an exponent: ";
      cin >> exponent;
      }   
      //call and print the Repower function
      cout << "The answer is: " << Repower(base, exponent) << endl;
      cout << "==============================================" << endl;

      cout << "Would you like to continue?" << endl;
      cout << "Press q to quit, or c to continue." << endl;
      cin >> ans;
      
      //statements to break the loop if user wants to quit, and warn the user if they are using wrong values
      if (ans == 'q' || ans == 'Q'){
         i = 0;
      } 
      else if (ans == 'c' || ans == 'C'){
         i = 1;
      }
      else{
         cerr << "Please enter either a 'c' or a 'q'." << endl << endl;
      }
   }
return 0;
}  
