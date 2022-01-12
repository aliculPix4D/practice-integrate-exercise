#include <assert.h>
#include <stdlib.h>
#include <stdio.h>

#include "morse/morse.h"

int main()
{   

    int code;
	//we want to mimic "char *argv[]" in which last item is always a null pointer
    char *args[3] = {"morse-unit-test", "sos", NULL};
    printf("Running unit tests\n");
	code = morseExec(2, args);
    assert(0 == code);

	exit(0);
}
