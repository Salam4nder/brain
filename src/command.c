#include <string.h>
#include "command.h"


Command command_from_string(char *s)
{
    if (strcmp(s, "note") == 0) return COMMAND_NOTE;
    return UNDEFINED;
}
