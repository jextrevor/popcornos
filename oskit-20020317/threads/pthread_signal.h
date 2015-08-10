/*
 * Copyright (c) 1996, 1998, 1999 University of Utah and the Flux Group.
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

#ifndef	_PTHREAD_SIGNAL_H_
#define _PTHREAD_SIGNAL_H_

void		  oskit_deliver_pending_signals(void);

/*
 * Inline the function to check for a pending signal. Call the delivery
 * mechanism if so. This function expects to be called with interrupts
 * disabled. 
 */
static inline void
SIGCHECK(struct pthread_thread *pthread)
{
	pthread_lock(&pthread->siglock);
	if (pthread->sigpending & ~pthread->sigmask)
		oskit_deliver_pending_signals();
	pthread_unlock(&pthread->siglock);
}

/*
 * Posix allows this.
 */
#define SIGQUEUE_MAX	64

/*
 * These are the thingies that go on the sigqueue. 
 */
typedef struct sigqueue_thingie {
	queue_chain_t	chain;
	siginfo_t	info;
} sigqueue_thingie_t;

#endif /* _PTHREAD_SIGNAL_H_ */
