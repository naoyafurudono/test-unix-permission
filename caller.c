#include<errno.h>
#include<stdio.h>
#include<string.h>
#include<unistd.h>

int main()
{
  char ** args = {NULL};
  char * cmd = "./callee";
  errno = 0;
  int c = execv(cmd, args);
  fprintf(stderr, "%s\n", strerror(errno));
  return c;
}

