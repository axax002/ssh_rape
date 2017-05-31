#ifndef __UTIL_H__
#define __UTIL_H__

#include <stdarg.h>
#include <stdint.h>
#include <types.h>
#include <inject.h>

void error( const char* format, ... );
void info( const char* format, ... );
void info2( const char* format, ... );
void mod_banner( const char* format, ... );
void hexdump(void *ptr, int buflen);

u64 resolve_symbol_tab(inject_ctx *ctx, char *name);
u64 find_hole(inject_ctx *ctx, u64 call, u32 size);
int patch_placeholder(u8 *blob, u32 len, u64 placeholder, u64 realvalue);
int convert_hostport_pair(char *s, uint32_t *ip, uint16_t *port);

#endif
