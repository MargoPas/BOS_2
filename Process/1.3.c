#include <stdio.h>

extern char **environ;
int main(int argc, char *argv[])
{
  int c = 0;
  char **p;
  for (p = environ; *p != NULL; p++) { 
    if(c==10) break;
    else printf("%s\n", *p); 
    c++;
  }
}
