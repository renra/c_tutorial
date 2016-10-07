#include <stdio.h>
#include <cstdlib>
#include <pthread.h>

// TODO: tidy up

struct pthread_args {
  int thread_id;
  string message;
};

void * speak(void * _args){
  struct pthread_args * args = (struct pthread_args *) _args;
  cout << args->thread_id;
  cout << args->message;
  cout << endl;

  pthread_exit(NULL);
}

void threads_exercise(){
  int NUM_THREADS = 5;
  int rc = 0;

  struct pthread_args args[NUM_THREADS];
  pthread_t threads[NUM_THREADS];

  for(int i = 0; i < NUM_THREADS; i++){
    args[i].thread_id = i;
    args[i].message = "Here is my message";

    rc = pthread_create(&threads[i], NULL, speak, (void *) &args[i]);

    if(rc){
      cout << "Could not create thread. RC: " << rc << endl;
      exit(1);
    }
  }

  pthread_exit(NULL);
  cout << endl;
}
