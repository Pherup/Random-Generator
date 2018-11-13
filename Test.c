#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <dirent.h>
#include <unistd.h>
#include <sys/types.h>

int main(int argc, char *argv[]){

char currentdir[50];
char *outputname;
if(getcwd(currentdir,sizeof(currentdir))){
    outputname=strdup(currentdir);
    }
printf("%s\n","hello");
printf("%s\n",outputname);
return 0;
}
