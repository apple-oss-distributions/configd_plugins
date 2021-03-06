/*
 * Copyright (c) 2000-2003 Apple Computer, Inc. All rights reserved.
 *
 * @APPLE_LICENSE_HEADER_START@
 * 
 * Copyright (c) 1999-2003 Apple Computer, Inc.  All Rights Reserved.
 * 
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this
 * file.
 * 
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 * 
 * @APPLE_LICENSE_HEADER_END@
 */

/*
 * Modification History
 *
 * July 17, 2000		Allan Nathanson <ajn@apple.com>
 * - initial revision
 */

#ifndef __CFMANAGER_H
#define __CFMANAGER_H

#include <CoreFoundation/CoreFoundation.h>
#include <sys/cdefs.h>


__BEGIN_DECLS

CFArrayRef	configRead	__P((const char *path));
void		configWrite	__P((const char *path, CFArrayRef config));
#ifdef	NOTNOW
void		configSet	__P((CFMutableArrayRef config, CFStringRef key, CFStringRef value));
void		configRemove	__P((CFMutableArrayRef config, CFStringRef key));
#endif	/* NOTNOW */

__END_DECLS


#endif	/* __CFMANAGER_H */
