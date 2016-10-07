#include <stdio.h>

// Only one variable contains a value
union FindTheValue{
  int count;
  char letter;
};

void union_exercise(){
  union FindTheValue ftv;
  union FindTheValue * p_ftv = NULL;

  p_ftv = &ftv;

  ftv.count = 12;
  printf("The count is: %d, the char is: %c\n", ftv.count, p_ftv->letter);

  ftv.letter = 'r';
  printf("The count is: %d, the char is: %c\n", ftv.count, p_ftv->letter);
}
