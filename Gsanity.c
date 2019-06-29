#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"

int main(int argc, char *argv[]) {
  int pid;



  if (argc != 2) {
    printf(2, "usage: %s n\n", argv[0]);
  }
  printf("Father pid is <%s>\n",getpid() );
  sleep(10);
  pid = fork();
  if ( pid < 0 )
   {
    printf(1, "%d failed in fork!\n", getpid());
    exit();
   } else if (pid == 0)
   {
    for (size_t i = 0; i < 1000; i++)
    {
        printf("process <%d> prints for the %d time",getpid(),i);
    }
  exit();
  }
}
