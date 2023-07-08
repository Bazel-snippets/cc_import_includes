#include <stdio.h>

#include "shared_lib.h"

unsigned int lib_function()
{
    printf("Shared library successfully invoked.\n");
    return 42;
}
