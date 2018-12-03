#include <stdio.h>
/*
	Facile
*/
void facile(char *a){printf(a,10,10,9,10,10,10,34,a,34,10,10,9,10,10,10);}
int main(){char *a = "#include <stdio.h>%c/*%c%cFacile%c*/%cvoid facile(char *a){printf(a,10,10,9,10,10,10,34,a,34,10,10,9,10,10,10);}%cint main(){char *a = %c%s%c;%c/*%c%ctoujour facile%c*/%cfacile(a);}%c";
/*
	toujour facile
*/
facile(a);}
