#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../strcon.h"

int main()
{
	printf("--------------\n");
	printf("testing strcon\n");
	printf("--------------\n");
	printf("\n");

	char strcon_dest[11] = "foo";
	char *strcon_result = strcon(strcon_dest, "bar", "test", NULL);

	printf("testing strcon_result: exp: %p, got: %p\n", strcon_dest, strcon_result);
	assert(strcon_result == strcon_dest);

	printf("testing strcon_dest: exp: foobartest, got: %s\n", strcon_dest);
	assert(strcmp(strcon_dest, "foobartest") == 0);

	printf("\n");
	printf("---------------\n");
	printf("testing astrcon\n");
	printf("---------------\n");
	printf("\n");

	char *astrcon_result = astrcon("foo", "bar", "test", NULL);

	printf("testing astrcon_result: exp: foobartest, got: %s\n", astrcon_result);
	assert(strcmp(astrcon_result, "foobartest") == 0);

	free(astrcon_result);
	return 0;
}
