#include <stdio.h>
#include <stdlib.h>
#include "mem_alloc.h"

int main()
{
    /* Mystery function to allocate and pre-fill some memory. */
    void *mem = allocate();  // pointer to unspecified type.
    printf(":: Memory allocated and filled at %p (length unknown).\n", mem);

    /* 
     * Pointers are powerful because they allow us to handle memory 
     * in any way we want. 
     */

    // interpret the memory as an signed integer?
    int *test1 = (int *)mem;
    printf("Interpret memory as signed int: %d.\n", *test1);

    // interpret the memory as a signed long integer?
    long *test2 = (long *)mem;
    printf("Interpret memory as signed long int: %ld.\n", *test2);

    // interpret the memory as a unsigned long integer?
    unsigned long *test3 = (unsigned long *)mem;
    printf("Interpret memory as signed long int: %lu.\n", *test3);

    // interpret the memory as a string?
    printf("Interpret memory as string: %s.\n", (char *)mem);

    // Is that it?

    return EXIT_SUCCESS;
}
