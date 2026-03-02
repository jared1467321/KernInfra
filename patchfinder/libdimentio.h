#ifndef LIBDIMENTIO_H
#define LIBDIMENTIO_H

#include <inttypes.h>
#include <CommonCrypto/CommonCrypto.h>
#include <CoreFoundation/CoreFoundation.h>
#include <mach/mach.h>

#include "../rw_prov/rw_prov.h"

#define KADDR_FMT "0x%" PRIX64

#ifndef MIN
#define MIN(a, b) ((a) < (b) ? (a) : (b))
#endif

#ifdef __cplusplus
extern "C" {
#endif

extern addr_t p_kbase;
extern addr_t p_kslide;
extern addr_t allproc;

void patchfinder_term(void);
kern_return_t patchfinder_init(void);
kern_return_t pfinder_init_offsets(void);

#ifdef __cplusplus
}
#endif

#endif
