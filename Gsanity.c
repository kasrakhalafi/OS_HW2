#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"

int main(int argc, char *argv[]) {
  int pid;
  int fatherPID = getpid();

  printf("Father pid is <%s>\n",fatherPID);
  sleep(10);
  pid = fork();
  if ( pid < 0 )
   {
     for (size_t i = 0; i < 1000; i++){
         printf(1,"process <%d> prints for the %d time",getpid(),i);
     }
    exit();
   } else{
    for (size_t i = 0; i < 1000; i++){
        printf(1,"process <%d> prints for the %d time",getpid(),i);
    }
    
  exit();
  wait();
  }
}
