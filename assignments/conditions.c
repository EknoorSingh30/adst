#include <stdio.h>

int main() {
    /*
    Write a C program to read the age of a candidate and
    determine whether he is eligible to cast his/her own vote.
    Test Data : 21
    Expected Output :
    Congratulations! You are eligible for casting your vote.

    Please use if conditions.
     */

    int age = 21;

    if(age >= 18) {
      printf("Congratulations! You are eligible for casting your vote.");
    } else {
      printf("Sorry, you cannot vote!");
    }
<<<<<<< HEAD
   // int age = 15;
=======
>>>>>>> 5e74c708d0f7c2fb63ccbd4659cbd704fac68145

    return 0;
}