#include <stdio.h>

extern float pi;

void extern_exercise(){
  printf("This is an extern function %f\n", pi);
}
