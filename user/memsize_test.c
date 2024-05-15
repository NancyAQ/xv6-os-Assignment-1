#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int
main(int argc, char *argv[])
{
  int i =memsize();
  fprintf(1,"current process size is %d",i);
  exit(0);
}
