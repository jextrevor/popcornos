/*
 * Copyright (c) 1997-1998, 2000 University of Utah and the Flux Group.
 * All rights reserved.
 * 
 * This file is part of the Flux OSKit.  The OSKit is free software, also known
 * as "open source;" you can redistribute it and/or modify it under the terms
 * of the GNU General Public License (GPL), version 2, as published by the Free
 * Software Foundation (FSF).  To explore alternate licensing terms, contact
 * the University of Utah at csl-dist@cs.utah.edu or +1-801-585-3271.
 * 
 * The OSKit is distributed in the hope that it will be useful, but WITHOUT ANY
 * WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 * FOR A PARTICULAR PURPOSE.  See the GPL for more details.  You should have
 * received a copy of the GPL along with the OSKit; see the file COPYING.  If
 * not, write to the FSF, 59 Temple Place #330, Boston, MA 02111-1307, USA.
 */

#include <oskit/machine/base_paging.h>
#include <oskit/dev/dev.h>

#include "native.h"

void *
mmap(void *addr, size_t len, int prot, int flags, int fd, off_t off)
{
	errno = ENOSYS;
	return MAP_FAILED;
}

int
munmap(void *addr, size_t len)
{
	return 0;
}

#ifdef __linux__ 
/* Linux prototype doesn't seem to have the const */
int
mprotect(void *addr, size_t len, int prot)
#else
int
mprotect(const void *addr, size_t len, int prot)
#endif
{
	if (NATIVEOS(mprotect)((void *)addr, len, prot) < 0) {
		panic("mprotect: failed.");
	}
	return 0;
}
