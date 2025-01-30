#include "../Header/H.h"
#ifndef H_H
#define H_H 
#endif // !H_H

#ifndef R_H
#define R_H /* File input Charchter*/
#endif /* R_H */
#define MAXLINE 10000
/*****************************************************/
int c; /*Read Input */
int nc; /*Counte Charchter */
int nw; /* count Word */
int nl; /* count line*/
/****************************************************/
int max; /* maximun length seen so far */
char line[MAXLINE];/*current line input*/
char longest[MAXLINE];/*longest line saved here */
/****************************************************/
int getline(void);
void copy(void);
int IN_read();
#ifdef R_H 

int IN_read() {
	extern int c, nc;
	for (nc = 0;/* (c = getchar()) != EOF || */(c = getchar()) != '^';++nc) {
		if (c == '\n') {
			++nl;
		}
		if (c == ' ' || c == '\n' || c == '\t') {
			++nw;
		}
		line[nc] = c;
	};
	return c;
};
int getline() {
	extern int c , nc;
	for (nc = 0;nc < MAXLINE - 1  &&(c = getchar()) != EOF && c != '\n';++nc) 
	{
		line[nc] = c;
		if (c == '\n')line[++nc] = c;
		line[nc] = '\0';
	}
		return c;
}
void copy() {
	int i;
	extern char line[], longest[];
	i = 0;
	while ((longest[i] = line[i]) != '\0')++i;
}

#endif // R_H 