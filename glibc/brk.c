//
// Created by xxx on 5/4/23.
//

#include <unistd.h>
#include <stdio.h>
#include <errno.h>

int main(int argc, char **argv) {
  printf("the address of before allocating 1024 bytes is %p\n", sbrk(0));
  void *new_heap_end = sbrk(1024);
  if ((void *) -1 == new_heap_end) {
    perror("fail to allocate 1024 bytes by using sbrk()\n");
    return -1;
  }
  printf("success to allocate 1024 bytes by using sbrk() %p\n", new_heap_end);
  brk(new_heap_end);
  return 0;
}