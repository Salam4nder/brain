#ifndef COMMAND_H
#define COMMAND_H

#include <string.h>

typedef enum {
    COMMAND_NOTE,
    UNDEFINED,
} Command;

Command command_from_string(char *s);


#endif
