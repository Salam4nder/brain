# COMMAND = undefined
# SUBCOMMAND = undefined

run:
	clang -Wall -Wextra -o build/main src/main.c && build/main ${COMMAND} ${SUBCOMMAND}
