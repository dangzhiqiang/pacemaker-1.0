/* 
 * Copyright (C) 2004 Andrew Beekhof <andrew@beekhof.net>
 * 
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 * 
 * This software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */
#ifndef MSG_UTILS__H
#define MSG_UTILS__H

#include <libxml/tree.h>

extern char* getNow(void);
extern const char *generateReference(void);
extern gboolean conditional_add_failure(xmlNodePtr failed, xmlNodePtr target, int operation, int return_code);
extern xmlNodePtr validate_crm_message(xmlNodePtr root, const char *sys, const char *msg_type);
extern xmlNodePtr createPingAnswerFragment(const char *from, const char *to, const char *status);
extern xmlNodePtr createPingRequest(const char *reference, const char *from, const char *to);
extern xmlNodePtr createCrmMsg(const char *reference,
			       const char *dest_subsystem,
			       const char *src_subsystem,
			       xmlNodePtr data,
			       gboolean is_request);
extern xmlNodePtr createIpcMessage(const char *reference,
				   const char *from,
				   const char *to,
				   xmlNodePtr data,
				   gboolean is_request);
gboolean decodeNVpair(const char *srcstring, char separator, char **name, char **value);



#endif
