#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int
main(int argc, char *argv[])
{
  int i =memsize();
  fprintf(1,"current process size is %d \n",i);
  int *help_arr=(int*) malloc(20*1024);
  int j =memsize();
  fprintf(1,"current size process after alloc is %d \n",j);
  free(help_arr);
  int z =memsize();
  fprintf(1,"current size process after freeing mem is %d \n",z);
  exit(0);
}
