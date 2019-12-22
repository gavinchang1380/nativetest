#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

#define MALLOC_SIZE 1024

extern "C" void do_something(void)
{
    volatile char *p = (char *)malloc(MALLOC_SIZE);
    printf("malloctest3: malloc address: 0x%p ~ 0x%p\n", &p[0], &p[MALLOC_SIZE - 1]);
}