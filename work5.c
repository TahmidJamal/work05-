#include <stdlib.h>
#include <stdio.h>
#include "work5.h"

char *my_strncopy( char *dest, char *source, int n) {
	//if n is larger than destination size 
	for (int i = 0; i < n; i++) {
		*(dest + i) = *(source + i);
	}
	return dest;
}

char *my_strcpy( char *dest, char *source ) {
	return my_strncopy(dest, source, sizeof(source) );
}

int my_strncomp( char *s1, char *s2, int n) {
	for (int i = 0; i < n && i < sizeof(s1) && i < sizeof(s2); i++ ) {
		if ( *(s1 + i) < *(s2 + i) ) {
			return *(s1 + i) - *(s2 + i);
		}
		else if ( *(s1 + i) > *(s2 + i) ) {
			return *(s1 + i) - *(s2 + i);
		}
	}
	return 0;
}

int my_strcomp( char *s1, char *s2) { 
	int min = 0;
	if ( sizeof(s1) < sizeof(s2) ) { 
		min = sizeof(s1);
	}
	else {
		min = sizeof(s2);
	}
	return my_strncomp( s1, s2, min );
}

char *strstr( char *s1, char *s2 ) {
	int run_through = 1; 
	for (int i = 0; i < sizeof(s1) - sizeof(s2); i++) { 
		if ( *(s1 + i) == *(s2 + i) ) { 
			while (run_through < sizeof(s2)-1 ) {
				if ( *(s1 + i + run_through) == *(s2 + i + run_through) ) {
					run_through++;
				}
				else {
					run_through = 1;
					break;
				}
			}
			if (run_through == sizeof(s2) - 1) {
				return (s1 + i);
			}
		}
	}
	return 0;
}
