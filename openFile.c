```c
#include<stdio.h>
FILE *fp;
if((fp = open("file1","r"))==NULL)
{
  printf("cannot open this file.\n");
  exit(0); //close all the files
}
```
