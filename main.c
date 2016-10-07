#include <stdio.h>
#include <string.h>

// For status code macros
#include <stdlib.h>

//Including twice on purpose
#include "constants.h"
#include "constants.h"

//#define pi 3.14
float pi = 3.14;

void separate(){
  printf("*************\n\n");
}

void print_data_type_sizes(){
  separate();
  printf("Int takes up %d bytes\n", sizeof(int));
  printf("Short takes up %d bytes\n", sizeof(short));
  printf("Long takes up %d bytes\n", sizeof(long));
  printf("Long long takes up %d bytes\n", sizeof(long long));
  printf("Float takes up %d bytes\n", sizeof(float));
  printf("Double takes up %d bytes\n", sizeof(double));
  printf("Long Double takes up %d bytes\n", sizeof(long double));
  printf("Char takes up %d bytes\n", sizeof(char));
  //  printf("Boolean takes up %d bytes\n", sizeof(bool));
  printf("Void takes up %d bytes\n", sizeof(void));
  //  printf("Byte takes up %d bytes\n", sizeof(byte));
}

void print_unsigned_letter(const unsigned char letter){
  printf("The letter is: %c and its ASCI code is %d\n", letter, letter);
}

void print_letter(const char letter){
  printf("The letter is: %c and its ASCI code is %d\n", letter, letter);
}

void print_char_exercise(){
  int i;
  separate();

  for(i=0; i < 256; i++){
    print_unsigned_letter(i);
  }
}

void print_char_underflow(){
  separate();
  unsigned char letter = -20;

  // The value rotates from unsigned char max value
  print_unsigned_letter(letter);
}

void register_exercise(){
  register int a = 10;
  printf("Variables stored in a register do not have an address\n");
  //This would cause an error
  //  printf("%d\n", &a);
}

void function_with_static_var(){
  //Variable does not get redeclared with each function call
  static int a = 0;
  a++;
  printf("The variable now has the value: %d\n", a);
}

void static_exercise(){
  int i;
  for(i=0; i<10; i++){
    function_with_static_var();
  }
}

void bitwise_exercise(){
  int a = 60;
  int b = 13;

  printf("a&b = %d\n", a&b);
  printf("a|b = %d\n", a|b);
  printf("a^b = %d\n", a^b);  
  printf("~a = %d\n", ~a);
  printf("a << 2 = %d\n", a << 2);
  printf("a >> 2 = %d\n", a >> 2);
}

void pointer_exercise(){
  int x = 1;
  int y = 2;
  swap(&x, &y);

  printf("The value of x is: %d\n", x);
  printf("The value of y is: %d\n", y);

  /*
  int * a = NULL;
  a = (int *)pointers_better_practice();  // Casting to avoid a warning
  printf("The address is: %x\n", a);      // Generates a warning. Why?

  *a = 30;
  pointers_better_practice();
  */
}

void print_constants(){
  printf("HTTP success status code is: %d\n", HTTP_SUCCESS);
}

//TODO: threads and semaphores
int main(int argc, char *argv[]){
  int i;
  printf("Hello World!\n");
  //  printf("Pi is around: %f\n", pi);
  //  print_data_type_sizes();
  //  print_char_exercise();
  //  register_exercise();
  //  static_exercise();

  //Works without declaring the function as extern
  //  extern_exercise();
  //  bitwise_exercise();
  //  pointer_exercise();
  //  struct_exercise();
  //  union_exercise();
  //  bit_fields_exercise();
  //  typedef_exercise();
  //  io_exercise();
  //  file_io_exercise();
  //  macros_exercise();
  //  print_constants();
  //  casting_exercise();
  //  error_handling_exercise();
  //  recursion_exercise();
  //  variable_arguments_exercise();
  //  memo_exercise();

  printf("You have entered %d arguments\n", argc-1);
  if(argc > 1){
    for(i=1; i<argc; i++){
      printf("The %dth argument is: %s\n", i, argv[i]);
    }
  }

  return EXIT_SUCCESS;
}
