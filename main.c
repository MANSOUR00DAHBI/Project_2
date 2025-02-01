#include "INPUT/Read.c"
#define R_H 

extern int  nc, nw, nl ,max ;
extern char longest[],line[];
int lin;
int main() {

	printf("Hello Press Key CTRL + D To Exit \n");

	//IN_read();
	printf("Hello Press Key CTRL + D To Exit \n");
	max = 0;
	lin = 0;
	while ((lin = getline()) > 0 && lin == '^') copy();
		if (lin > max) {
			max = lin;
			copy();
		}
		printf("%d\n", lin);
	printf("%d\n", max);
	printf("\n--------------------------------------------\n");
	if (max > 0)printf("%s", longest);
	printf("\n--------------------------------------------\n");
	printf("\n");
	printf("count : %3d Word : %3d line : %3d ", nc, nw , nl + 1 );

	return 0;
}
