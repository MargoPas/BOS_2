#include <stdio.h>


extern char **environ;
int main(int argc, char const *argv[])
{
  int env = 0;
  int args = 0;
  char **p;
  for (p = environ; *p != NULL; p++)
   env++;
  printf("Number of environment variables: %d\n", env);
  for(int j = 0; j < argc; j++)
    args++;
  printf("Amount of received arguments: %d\n", args-1);
}
