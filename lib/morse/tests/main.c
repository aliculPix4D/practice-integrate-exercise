#include <stdlib.h>
#include <stdio.h>
#include "morse/morse.h"


int main(int argc, char *argv[])
{
	int i;
	printf("main\n");
    printf("%d\n",argc);
    for(i=0;i<argc;i++)
    {
        printf("%s\n",argv[i]);
    }
	morseExec(argc, argv);
	exit(0);
}
