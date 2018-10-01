#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "work5.h"

int main() {


	char *s00 = "hello";
	char *s01 = "";
	char es00[10] = "pyro";
	char es01[10] = "agua";
	char es000[10] = "pyro";
	char es001[10] = "agua";

	char s04[10] = "yes";
	char s004[10] = "yes";
	char *s05 = "no";
	char s06[10] = "maybe";
	char s006[10] = "maybe";
	char *s07 = "so";
	char *s007 = "so";
	char *s08 = "uhoh";
	char c09 = 'o';
	char c10 = 'y';
	printf("s00: [%s]\n", s00);
	printf("s01: [%s]\n", s01);
	printf("es00: [%s]\n", es00);
	printf("es01: [%s]\n", es01);
	printf("s04: [%s]\n", s04);
	printf("s05: [%s]\n", s05);
	printf("s06: [%s]\n", s06);
	printf("s07: [%s]\n", s07);
	printf("c09: [%c]\n", c09);
	printf("c10: [%c]\n", c10);

	printf("\n");

	printf("Testing strlen(s00): \n");
  	printf("[standard]: %lu\n", strlen(s00));
  	printf("[mine]: %d\n\n", my_strlen(s00));
  	printf("Testing strlen(s01): \n");
  	printf("[standard]: %lu\n", strlen(s01));
  	printf("[mine]: %d\n\n", my_strlen(s01));

	printf("Testing strcpy(es00,es01): \n");
	printf("[standard]: %s\n", strcpy(es00,es01));
	printf("[mine]: %s\n\n", my_strcpy(es000,es001));

	printf("Testing strncpy(es01,s04, 2): \n");
	printf("[standard]: %s\n", strncpy(es01,s04, 2));
	printf("[mine]: %s\n\n", my_strncpy(es001,s004, 2));

	// printf("s04: [%s]\n", s04);
	// printf("s05: [%s]\n", s05);
	// printf("s06: [%s]\n", s06);
	// printf("s07: [%s]\n", s07);
	// printf("\n");
	printf("Testing strncat(s06,s07,2):\n");
	printf("[standard]: %s\n", strncat(s06,s07,2));
	// printf("Testing strncat(s06,s07,2):\n");
	printf("[mine]: %s\n\n", my_strncat(s006,s007,2));

	// printf("s08: [%s]\n", s08);
	// printf("c09: [%c]\n", c09);
	// printf("c10: [%c]\n\n", c10);
	printf("Testing strchr(s08,c09)\n");
	printf("[standard]: %p\n", strchr(s08,c09));
	printf("[mine]: %p\n", my_strchr(s08,c09));
	printf("Testing strchr(s08,c10)\n");
	printf("[standard]: %p\n", strchr(s08,c10));
	printf("[mine]: %p\n", my_strchr(s08,c10));

	printf("\n");
	printf("Testing strcmp\n");
	printf("Comparing ab to abc:\n");
	printf("[standard]: [%d]\n",strcmp("ab","abc"));
	printf("[mine]: [%d]\n",my_strcmp("ab","abc"));
	printf("\n");

	printf("Comparing abc to ab:\n");
	printf("[standard]: [%d]\n",strcmp("abc","ab"));
	printf("[mine]: [%d]\n",my_strcmp("abc","ab"));
	printf("\n");

	printf("Comparing abc to abc:\n");
	printf("[standard]: [%d]\n",strcmp("abc","abc"));
	printf("[mine]: [%d]\n",my_strcmp("abc","abc"));
	printf("\n"); 

	// printf("Comparing strstr(''I like cake'',''cake'')\n");
	// printf("[standard]: %s\n",strstr("I like cake","cake"));
	// printf("[mine]: %s\n",my_strstr("I like cake","cake"));








	return 0;
}
