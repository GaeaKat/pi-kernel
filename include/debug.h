#ifndef _DEBUG_H
#define _DEBUG_H

#include "stdint.h"

#define ASSERT(e) do { \
    if(!(e)) \
        error_check(__FILE__, __LINE__); \
} while(0)

void error_check(const char *file, uint64_t line);


#endif // _DEBUG_H
