#include <stdio.h>
#include <stdlib.h>
#define STR "#include <stdio.h>%c#include <stdlib.h>%c#define STR %c%s%c%cint main(){char *file_name = %cSully_x.c%c;char *command = %cclang -Werror -Wall -Wextra Sully_x.c -o Sully_x ; ./Sully_x%c;int i = %d;command[34] = 48 + i - 1;command[47] = command[34];command[59] = command[34];file_name[6] = 48 + i - 1;if (i <= 0) return (0);FILE *file = fopen(file_name, %cr+%c);fprintf(file,STR,10,10,34,STR,34,10,34,34,34,34,i-1,34,34,10);i > 1 ? system(command) : 0;}%c"
int main(){char *file_name = "Sully_x.c";char *command = "clang -Werror -Wall -Wextra Sully_x.c -o Sully_x ; ./Sully_x";int i = 5;command[34] = 48 + i - 1;command[47] = command[34];command[59] = command[34];file_name[6] = 48 + i - 1;if (i <= 0) return (0);FILE *file = fopen(file_name, "r+");fprintf(file,STR,10,10,34,STR,34,10,34,34,34,34,i-1,34,34,10);i > 1 ? system(command) : 0;}
