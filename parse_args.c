#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

char ** parse_args(char* line){
  char** ret = (char**) calloc( 6, sizeof(char*));
  int i = 0;

  while(line)  {

    ret[i] = strsep(&line," ");
    i++;
  }

  return ret;
}





int main(){
  
  char l[100] = "ls -a -l";
  char** xd = parse_args(l);
  execvp (xd[0], xd);
  return 93;
}
