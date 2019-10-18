
#include "Python.h"

#ifndef PLATFORM
#define PLATFORM "darwin"
#endif

const char *
Py_GetPlatform(void)
{
    return PLATFORM;
}
