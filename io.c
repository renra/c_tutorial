#include <stdio.h>
#include <string.h>

typedef unsigned char Letter;
// How to typedef a char[]?
//typedef char[] Buffer;

void getchar_putchar_exercise(){
  Letter l;
  printf("Hey there. Press a key:");
  l = getchar();

  printf("You entered: %c\n", l);
}

void gets_puts_exercise(){
  char buff[50];
  printf("Tell me something: ");
  gets(buff);

  printf("You have said: %s\n", buff);
}

void scanf_exercise(){
  int i;
  printf("Give me a number: ");
  scanf("%d", &i);
  printf("You have written: %d\n", i);
}

void io_exercise(){
  //  getchar_putchar_exercise();
  //  gets_puts_exercise();
  scanf_exercise();
}
