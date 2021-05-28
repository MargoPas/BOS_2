#include <stdio.h>

extern char **environ;
int main(int argc, char const *argv[])
{
   int c = 0;
   int amount;
   sscanf(argv[1], "%d",&amount);
   char **p;
   for (p = environ; *p != NULL; p++) 
   {if(c<amount) printf("%s\n", *p); 
    else break;
    c++;}
}
