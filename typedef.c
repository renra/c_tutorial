#include <stdio.h>

typedef unsigned char Letter;
typedef struct Data{
  int a;
} Data;

void typedef_exercise(){
  Data data;
  Letter letter = 'z';
  data.a = 10;
}
