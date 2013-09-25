#include <stdio.h>
#include <errno.h>
#include <string.h>

extern int errno;

void error_handling_exercise(){
  FILE * fd = NULL;
  int errnum;
  fd = fopen("unexisting_file.txt", "r");

  if(fd == NULL){
    errnum = errno;
    fprintf(stderr, "I received the error: %d\n", errno);
    perror("My error explanation");
    fprintf(stderr, "Error: %s\n", strerror(errnum));
  }
  else{
    printf("Strange. The file got opened, but it should not exist at all.\n");
    fclose(fd);
  }
}
