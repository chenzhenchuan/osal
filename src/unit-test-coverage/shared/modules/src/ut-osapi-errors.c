/* pull in the OSAL configuration */
#include "osconfig.h"
#include "ut-osapi-errors.h"

/*
 * Now include all extra logic required to stub-out subsequent calls to
 * library functions and replace with our own
 */
#include "osapi-errors.c"

