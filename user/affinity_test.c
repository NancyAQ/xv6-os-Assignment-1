#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int
main(int argc, char *argv[])
{
  int mask=16;
  set_affinity_mask(mask);
  for(int i=0;i<20;i++){
    fprintf(1,"id of process is %d \n", getpid());
  }
  return 0;
}
