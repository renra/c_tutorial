#include <stdio.h>

// If I don't specify the parameter type I get no warning !!!
int fact(n){
  if(n < 1){
    printf("Argument must be greater than 0\n");
    return 0;
  }

  if(n == 1){
    return 1;
  }

  return n*fact(n-1);
}

void recursion_exercise(){
  int a = 6;
  printf("The factorial of %d is: %d\n", a, fact(a));
}
