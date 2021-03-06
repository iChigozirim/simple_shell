#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <string.h>

char *read_line();
char **parse_line(char *line);
char *get_path(char *filename);
int run_command(char **args, char **argv);

#endif /* define MAIN_H */
