#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
#include "strcon.h"

char *strcon(char *dest, ...)
{
	va_list ap;
	va_start(ap, dest);

	const char *src;
	while ((src = va_arg(ap, const char*))) {
		strcat(dest, src);
	}

	va_end(ap);
	return dest;
}

char *astrcon(const char *src1, ...)
{
	va_list ap;
	va_start(ap, src1);

	va_list aq; // copy so we can iterate twice
	va_copy(aq, ap);

	const char *src2;
	size_t size = 1 + strlen(src1);
	while ((src2 = va_arg(aq, const char*))) {
		size += strlen(src2);
	}

	va_end(aq);

	char *dest = malloc(size);
	strcpy(dest, src1);

	while ((src2 = va_arg(ap, const char*))) {
		strcat(dest, src2);
	}

	va_end(ap);
	return dest;
}
