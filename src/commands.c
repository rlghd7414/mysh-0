#include <string.h>
#include <unistd.h>
#include "commands.h"
#include <stdio.h>
char dirname[200];

int do_cd(int argc, char** argv) {
  if (!validate_cd_argv(argc, argv))
    return -1;

chdir("argv[1]");
  return 0;
}

int do_pwd(int argc, char** argv) {
  if (!validate_pwd_argv(argc, argv))
    return -1;

  printf("%s\n",dirname);

  return 0;
}

int validate_cd_argv(int argc, char** argv) {
if(chdir(argv[1])) 
  return 1;

else
return 0;
}

int validate_pwd_argv(int argc, char** argv) {
  if(getcwd(dirname,200)==dirname)
  return 1;


return 0;
}
