#include "utils.h"
#include <stdlib.h>
#include <string.h>

void mysh_parse_command(const char* command,
                        int *argc, char*** argv)
{
int x=0;
int y=0;
int i=0;
int j=0;
int p=0;
int range=0;
int max_range=0;
int word=0;

*argc=1;

while(1)
{
if (command[i]==' ')
{
range++;
if(range>max_range)
max_range=range;
range=0;
word++;
}
else if(command[i]=='\0')
{
if(range>max_range)
max_range=range;
word++;
}
else
{
range++;
}

if(command[i]=='\0')
break;
i++;
}


*argv=(char**)malloc(sizeof(char*)*word);
for(i=0;i<word;i++)
{
(*argv)[i]=(char*)malloc(sizeof(char)*max_range);

}

for(i=0;command[i]!='\0';i++)
{
if(command[i]==' ')
{
(*argv)[(*argc)-1][p++]='\0';
(*argc)++;
p=0;
}
else if (command[i]=='\0')
{
(*argv)[(*argc)-1][p++]='\0';
}
else
{
(*argv)[(*argc)-1][p++]=command[i];
}
}
return ;

}
