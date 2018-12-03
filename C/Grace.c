#include <stdio.h>
/* com */
#define STR "#include <stdio.h>%c/* com */%c#define STR %c%s%c%c#define WRITE_FILE(x) fprintf(x,STR,10,10,34,STR,34,10,10,34,34,34,34,10,10);%c#define MAIN(x)int main(){FILE *file = fopen(%cGrace_kid.c%c, %cw+%c);WRITE_FILE(file);fclose(file);}%cMAIN(0)%c"
#define WRITE_FILE(x) fprintf(x,STR,10,10,34,STR,34,10,10,34,34,34,34,10,10);
#define MAIN(x)int main(){FILE *file = fopen("Grace_kid.c", "w+");WRITE_FILE(file);fclose(file);}
MAIN(0)
