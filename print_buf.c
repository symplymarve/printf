#include "main.h"

/**
 *group project
*/
int print_buf(char *buf, unsigned int nbuf)
{
	return (write(1, buf, nbuf));
}
