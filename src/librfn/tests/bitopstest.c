/*
 * bitopstest.c
 *
 * Part of librfn (a general utility library from redfelineninja.org.uk)
 *
 * Copyright (C) 2012 Daniel Thompson <daniel@redfelineninja.org.uk>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 */

#undef NDEBUG

#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

#include <librfn.h>

int main()
{
	assert(8 == bitcnt(0x11111111));
	assert(32 == bitcnt(0xffffffff));
	assert(16 == bitcnt(0xff00ff00));
	assert(16 == bitcnt(0xcccccccc));
	assert(0 == bitcnt(0));

	assert(32 == clz(0));
	assert(31 == clz(1));
	assert(16 == clz(0xffff));
	assert(0 == clz(0xffffffff));
	assert(14 == clz(0x3ffff));
	assert(14 == clz(0x20000));

	assert(0 == ilog2(1));
	assert(1 == ilog2(2));
	assert(1 == ilog2(3));
	assert(2 == ilog2(4));
	assert(19 == ilog2(1 << 19));

	return 0;
}
