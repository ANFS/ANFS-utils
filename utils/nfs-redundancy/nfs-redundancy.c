/*
 * utils/nfs-redundancy/nfs-redundancy.c
 * 
 * Control redundancy options
 *
 * Copyright (C) 2011 Lee Trager <lt73@cs.drexel.edu>
 */

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <getopt.h>

#include "redundancy.h"

void version()
{
	printf("nfs-redundancy - version 0.01 development\n");
}

void help()
{
	version();
	printf("\nusage: nfs-redundancy [arguments]\n\n");
	printf("Arguments:\n");
	printf("-a <server>		Add a server to redundancy\n");
	printf("-r			Remove this server from redundancy\n");
	printf("-l			List information about all redundant servers\n");
	printf("-v			Print version information\n");
	printf("-h			Print this message\n");		
}

int main(int argc, char** argv)
{
	char* server = NULL;
	int c;

	while((c = getopt(argc, argv, "a:rlvh")) != EOF)
	{
		switch(c)
		{
			case 'a':
				break;
			case 'r':
				break;
			case 'l':
				break;
			case 'v':
				version();
				break;
			case 'h':
				help();
				break;
			default:
				help();
				break;
		}
	}

	return 0;
}

