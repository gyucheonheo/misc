#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#define SZ 16

int main(){
  FILE *fd = fopen("test16.txt", "w+");
  char *buf = malloc(sizeof(char)*SZ);

  fwrite(buf, SZ, 1, fd);
  sleep(atoi(argv[1]));
  fread(buf, SZ, 1, fd);
  fclose(fd);
}

  // 8, 128, 2048, 128kb, 512kb, 1mb, 2mb
