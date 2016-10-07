#include <stdio.h>

void file_io_exercise(){
  FILE * fd;
  char buff[100];
  const unsigned char filename[] = "file_io.txt";

  // No error checking yet
  fd = fopen(filename, "rw");
  fprintf(fd, "I am reaching a file!\n");
  fgets(buff, 255, fd);

  printf("The file says: %s\n", buff);
  fclose(fd);
}
