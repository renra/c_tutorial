#include <stdio.h>

#define call(person) \
  printf("Calling " #person " \n")

#define tokenpaster(n) printf("token" #n " = %d\n", token##n)

#define SPEED_OF_LIGHT 300000000
#if !defined(SPEED_OF_LIGHT)
  #define SPEED_OF_LIGHT 30
#endif

void macros_exercise(){
  printf("Date is: %s\n", __DATE__);
  printf("Time is: %s\n", __TIME__);
  printf("File is: %s\n", __FILE__);
  printf("Date is: %s\n", __DATE__);
  printf("Line is: %d\n", __LINE__);
  printf("STDC is: %d\n", __STDC__);

  call("Obi-Wan Kenobi");

  int token34 = 40;
  tokenpaster(34);

  printf("The speed of light is: %d\n", SPEED_OF_LIGHT);
}
