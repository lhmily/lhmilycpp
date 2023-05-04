//
// Created on 5/4/23.
//
#include <stdio.h>
#include <stdlib.h>
#include <sys/mman.h>

int main(int argc, char **argv) {

  char *mem = mmap(NULL, 1024, PROT_READ | PROT_WRITE, MAP_ANONYMOUS | MAP_PRIVATE, -1, 0);
  if (mem == MAP_FAILED) {
    perror("fail to mmap 1024 bytes.\n");
    return -1;
  }
  sprintf(mem, "hello mmap");
  printf("%s\n", mem);

  anera

  munmap(mem, 1024);
  return 0;
}