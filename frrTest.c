#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"

int main(int argc, char *argv[]) {
  int pid;
  int k, n;
  int x, z;


  if (argc != 2) {
    printf(2, "usage: %s n\n", argv[0]);
  }
  for (j = 0; j < 3; j++)
    sums[j] = 0;
  n = atoi(argv[1]);

  for ( k = 0; k < 10; k++ ) {
    pid = fork ();
    if ( pid < 0 ) {
      printf(1, "%d failed in fork!\n", getpid());
      exit();
    } else if (pid == 0) {
      // child
      pid = wait2(&retime, &rutime, &stime);
      for (size_t i = 0; i < 1000; i++) ;
      printf("<%s>,",getpid());
      exit();
    }
  }

  exit();
}
