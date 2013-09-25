#include <stdio.h>

struct Data{
  int a : 1;
};

void bit_fields_exercise(){
  struct Data data;
  data.a = 0;

  printf("Size is: %d\n", sizeof(data));
}
