#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "work5.h"

int main() {

	//I'm not using these tests
	//change these values
	char c1[100];
	char c2[] = "aaaaaaaaaa";
	char c3[] = "bbbbbbbbbb";
	//same as cX strings but will be used on our functions
	char m1[100];
	char m2[] = "aaaaaaaaaa";
	char m3[] = "bbbbbbbbbb";

	char *s00 = "hello";
	char *s01 = "";


	char s04[10] = "yes";
	char *s05 = "no";
	char s06[10] = "maybe";
	char *s07 = "so";
	char *s08 = "uhoh";
	char c09 = 'o';
	char c10 = 'y';
	printf("s00: [%s]\n", s00);
	printf("s01: [%s]\n", s01);


	printf("\n");

	printf("Testing strlen(s00): \n");
  printf("[standard]: %lu\n", strlen(s00));
  printf("[mine]: %d\n\n", my_strlen(s00));
  printf("Testing strlen(s01): \n");
  printf("[standard]: %lu\n", strlen(s01));
  printf("[mine]: %d\n\n", my_strlen(s01));

	printf("\nTest my_strcpy\n");
	// printf("c: [%s]\n",strcpy(c1,c2));
	// printf("my: [%s]\n",my_strcpy(m1,m2));

	printf("s04: [%s]\n", s04);
	printf("s05: [%s]\n", s05);
	printf("s06: [%s]\n", s06);
	printf("s07: [%s]\n", s07);
	printf("\n");
	printf("Testing strncat(s04,s05,2):\n");
	printf("[standard]: %s\n", strncat(s04,s05,2));
	printf("Testing strncat(s06,s07,2):\n");
	printf("[mine]: %s\n\n", my_strncat(s06,s07,2));

	printf("s08: [%s]\n", s08);
	printf("c09: [%c]\n", c09);
	printf("c10: [%c]\n\n", c10);
	printf("Testing strchr(s08,c09)\n");
	printf("[standard]: %s\n", strchr(s08,c09));
	printf("[mine]: %s\n", my_strchr(s08,c09));
	printf("Testing strchr(s08,c10)\n");
	printf("[standard]: %s\n", strchr(s08,c10));
	printf("[mine]: %s\n", my_strchr(s08,c10));


	return 0;
}
