#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define STR "#include <stdio.h>%c#include <stdlib.h>%c#include <string.h>%c#define STR %c%s%c%cint main(){char file_name[10] = %cSully_x.c%c;char command[200] = %cclang -Werror -Wall -Wextra Sully_x.c -o Sully_x ; ./Sully_x%c;%cint i = %d;%cint ok = strlen(__FILE__) == 7 ? 0 : 1;command[34] = 48 + i - ok;command[47] = command[34];command[59] = command[34];file_name[6] = 48 + i - ok;if (i <= 0) return (0);FILE *file = fopen(file_name, %cw+%c);fprintf(file,STR,10,10,10,34,STR,34,10,34,34,34,34,10,i-ok,10,34,34,10);fclose(file);system(command);}%c"
int main(){char file_name[10] = "Sully_x.c";char command[200] = "clang -Werror -Wall -Wextra Sully_x.c -o Sully_x ; ./Sully_x";
int i = 5;
int ok = strlen(__FILE__) == 7 ? 0 : 1;command[34] = 48 + i - ok;command[47] = command[34];command[59] = command[34];file_name[6] = 48 + i - ok;if (i <= 0) return (0);FILE *file = fopen(file_name, "w+");fprintf(file,STR,10,10,10,34,STR,34,10,34,34,34,34,10,i-ok,10,34,34,10);fclose(file);system(command);}
