#include <stdio.h>

/*
  One comment
*/

/*
  Two comment
*/

char	*other(void) {
	return ("#include <stdio.h>%c%c/*%c  One comment%c*/%c%c/*%c  Two comment%c*/%c%cchar	*other(void) {%c%creturn (%c%s%c);%c}%c%cint		main(void) {%c%cprintf(other(), 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 9, 34, other(), 34, 10, 10, 10, 10, 9, 10, 10, 10, 10);%c}%c");
}

int		main(void) {
	printf(other(), 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 9, 34, other(), 34, 10, 10, 10, 10, 9, 10, 10, 10, 10);
}
