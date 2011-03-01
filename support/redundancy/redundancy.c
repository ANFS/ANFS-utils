/*
 * support/redundancy/redundancy.c
 *
 * Communicate with the kernel redundancy features
 *
 * Copyright (C) 2011 Lee Trager <lt73@cs.drexel.edu>
 *
 */

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#include "redundancy.h"

int addRedundant(char* addr);

int removeRedundant();

int listRedundant();

