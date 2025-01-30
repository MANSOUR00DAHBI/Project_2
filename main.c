#include "INPUT/Read.c"
#define R_H 

extern int  nc, nw, nl;

int main(){

	printf("Hello Press Key CTRL + D To Exit \n");
	
	IN_read();

	printf("count : %3d Word : %3d line : %3d ", nc, nw , nl + 1 );

	return 0;
}
