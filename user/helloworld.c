#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int
main(int argc, char *argv[])
{
  fprintf(1,"Hello World xv6\n");
  exit(0,0);//0 pointer to test the functionality of the exit sys call 
  
}
