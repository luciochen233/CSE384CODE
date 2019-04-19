#if !defined(HEADER_H)
#define HEADER_H
#include<stdio.h>
#include<unistd.h> //lseek, STDIN_FILENO
#include<stdlib.h>
#include <fcntl.h>
int my_strlen(char* format_string);
void my_echo(int fd, char* str);
void my_printf(char* format_string);
void my_cat(char* pathname);
void my_touch(char* pathname);
#endif