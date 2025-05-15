#include <stdio.h>
#include <stdlib.h>

#include "command.h"

void help_message();

int main(int argc, char *argv[]) {
    printf("%d\n", argc);

    if (argc < 3) {
        help_message();
        exit(1);
    }

    Command c = command_from_string(argv[1]);
    switch (c) {
        case COMMAND_NOTE:
            break;
        case UNDEFINED:
            break;
    };

    return 0;
}

void help_message()
{
    printf("usage: brain <command>-<subcommand>\n");
}
