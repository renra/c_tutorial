#include <stdio.h>
#include <string.h>

struct Book{
  char title[50];
  char author[50];
  int published_in;
};

void struct_exercise(){
  struct Book lotr;
  struct Book * p_lotr = NULL;

  strcpy(lotr.title, "Lord of the Rings");
  strcpy(lotr.author, "J. R. R. Tolkien");
  lotr.published_in = 1950;    // Not accurate

  p_lotr = &lotr;
  
  printf("The book is called: %s\n", lotr.title);
  printf("The book's author is: %s\n", p_lotr->author);
}
