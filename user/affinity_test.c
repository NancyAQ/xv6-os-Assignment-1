#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int
main(int argc, char *argv[])
{
  int mask=5;
  set_affinity_mask(mask);
  for(;;){
  // for(int i=0;i<=200;i++){
    int id=getpid();
    fprintf(1,"id of process is %d \n", id);
  }
  return 0;
}
