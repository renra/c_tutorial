#include <stdio.h>

/* This generates a warning - function returns address of local variable
int * pointers_bad_practice(){
  int a = 10;
  printf("Bad practice - Value: %d, Address: %x\n", a, &a);
  return &a;
}
*/

int * pointers_better_practice(){
  static int a = 20;
  printf("Better practice - Value: %d, Address: %x\n", a, &a);
  return &a;
}
