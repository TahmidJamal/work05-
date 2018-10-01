#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "work5.h"

int main() {

	//change these values 
	char c1[100]; 
	char c2[] = "aaaaaaaaaa";
	char c3[] = "bbbbbbbbbb";
	//same as cX strings but will be used on our functions
	char m1[100];
	char m2[] = "aaaaaaaaaa";
	char m3[] = "bbbbbbbbbb";

	printf("\nTest my_strlen\n"); //Mathew 

	printf("\nTest my_strcpy\n");
	printf("c: [%s]\n",strcpy(c1,c2));
	printf("my: [%s]\n",my_strcpy(m1,m2));



	return 0;
}

