#include <stdlib.h>
#include <stdio.h>
#include "morse/morse.h"

void usage() {
    printf("usage: gaston <command> <options>\n");
    printf("\ncommands:\n");
	printf("morse    [-elrs] [-d device] [-w speed] [-c speed] [-f frequency] [string ...]\n");
}

int main(int argc, char *argv[])
{
	// avoid using  platform specific (only POSIX) getopt() to 
	// ease porting to Windows
	if( argc == 1) {
		usage();
		exit(0);
	}
	char *cmd = argv[1];
	switch (*cmd) {
	case 'm':
		argv[1] = "gaston: morse";
		morseExec(argc-1, argv + 1);
		break;
	default:
		usage();
		exit(0);
	}
	exit(0);
}
