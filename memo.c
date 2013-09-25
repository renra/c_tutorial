#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Allocate an array dynamically
void memo_exercise(){
  char * name = NULL;
  int num_of_chars = 0;
  int i = 0;
  char letter;

  printf("Tell me how many characters comprise your name: ");
  scanf("%d", &num_of_chars);

  //Probably unportable
  __fpurge(stdin);

  if(num_of_chars > 0){
    name = malloc(num_of_chars * sizeof(char));
    if(name){
      printf("Now write your name please: ");

      //How to include whitespaces?
      //scanf("%s", name);

      while( (letter = getchar()) != '\n' ){
	*(name+i++) = letter;
      }

      //Strange, this is not needed
      //*(name+i++) = '\0';

      printf("Your name is: %s\n", name);

      free(name);
    }
    else{
      fprintf(stderr, "Could not allocate memory\n");
    }
  }
  else{
    printf("That's hardly a reasonable size. Signing off.\n");
  }
}
