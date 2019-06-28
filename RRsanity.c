#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"

int main(int argc, char *argv[]) {
  int pid;
  int k, n;
  int x, z;
  int retime;
	int rutime;
	int stime;
	int sums[3];

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
      for (size_t i = 0; i < 1000; i++) {
        	printf("child %d prints for the %d time",getpid(),i);
      }
      exit();
    }
  }
  for (j = 0; j < 3; j++)
    sums[j] /= n;
  printf(1, "\n\nPriority 2:\nAverage ready time: %d\nAverage running time: %d\nAverage sleeping time: %d\nAverage turnaround time: %d\n\n\n", sums[0], sums[1], sums[2], sums[0] + sums[1] + sums[2]);


  exit();
}
