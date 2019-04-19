#include <stdio.h>

#define BLA "\033[30m"
#define RED "\033[31m"
#define GRE "\033[32m"
#define YEL "\033[33m"
#define BLU "\033[34m"
#define MAG "\033[35m"
#define CYA "\033[36m"
#define RES "\033[37m"

#define _RED "\033[41m"
#define _GRE "\033[42m"
#define _YEL "\033[43m"
#define _BLU "\033[44m"
#define _MAG "\033[45m"
#define _CYA "\033[46m"
#define _RES "\033[40m"

int main(void)
{
	/* compile-time string concatenation, or not */
	printf("ANSI [" RED "col" GRE "0" RED "rs" RES "] are %s%s%s!\n", CYA, "cool", RES);
	puts(_RED BLA "foo" _RES RES);
	return (0);
}
