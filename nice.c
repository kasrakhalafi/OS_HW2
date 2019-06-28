#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"

int main(int argc, char *argv[])
{
    int value, pid;
    if (argc < 2 )
    {
        printf(2," first pid , second value between 1 to 3\n");
        exit();
    }
    pid = atoi(argv[1]);
    value = atoi(argv[2]);
    if ( value <1 || value>3)
    {
        printf(2, " first pid , second value between 1 to 3\n");
        exit();
    }
    chpr(pid, value);