#ifndef _STRCON_H_
#define _STRCON_H_

/*
 * The functions below should only be called with string arguments.
 * The last argument has to be NULL.
 */
char *strcon(char *dest, ...);

// It is up to the caller to free the returned pointer.
char *astrcon(const char *src, ...);

#endif
