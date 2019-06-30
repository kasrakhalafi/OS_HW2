#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"

int main(int argc, char *argv[]) {
  int pid;


  for (int k = 0; k < 10; k++ ) {
    pid = fork ();
    if ( pid < 0 ) {
      printf(1, "%d failed in fork!\n", getpid());
      exit();
    } else if (pid == 0) {
      // child
      for (size_t i = 0; i < 1000; i++) ;
      printf("<%s>,",getpid());
      exit();
    }
  }
  for (size_t i = 0; i < 10; i++) {
    wait();
  }
  exit();
}
