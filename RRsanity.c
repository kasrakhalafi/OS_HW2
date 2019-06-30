#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"

int main(int argc, char *argv[]) {
  int runningTime,waitingTime;

  for (int k = 0; k < 10; k++ ) {
    pid = fork ();
    if ( pid < 0 ) {
      printf(1, "%d failed in fork!\n", getpid());
      exit();
    } else if (pid == 0) {
      // child

      pid = getPerformanceData(&waitingTime, &runningTime);
      for (size_t i = 0; i < 1000; i++) {
        	printf("child <%d> prints for the <%d> time",getpid(),i);
      }
      exit(); // children exit
    }
    printf(1, "\n\n Wating time: %d\n running Time: %d\nTurn Around Time: %d: \n\n\n",waitingTime,runningTime,waitingTime+runningTime);
  }
  exit();
}
