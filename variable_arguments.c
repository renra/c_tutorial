#include <stdio.h>
#include <stdarg.h>

int var_args_sum(int n, ...){
  va_list list;
  int sum = 0;
  int i;

  //Initialize
  va_start(list, n);

  for(i = 0; i < n; i++){
    //Access the arguments
    sum += va_arg(list, int);
  }

  //Clean up the memory
  va_end(list);

  return sum;
}

void variable_arguments_exercise(){
  printf("The sum is: %d\n", var_args_sum(2, 10, 20));
}
