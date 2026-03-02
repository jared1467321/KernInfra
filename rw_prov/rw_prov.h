#ifndef RW_PROV_H
#define RW_PROV_H

#include <stdint.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef uint64_t addr_t;

// Read kernel
uint32_t kernel_read32(uint64_t);
uint64_t kernel_read64(uint64_t);

// Write kernel
void kernel_write32(uint64_t, uint32_t);
void kernel_write64(uint64_t, uint64_t);

void kernel_read(uint64_t where, void *buf, size_t size);
void kernel_write(uint64_t where, const void *buf, size_t size);

void kernel_getbase(uint64_t *retkbase, uint64_t *retkslide);

// 0 = success, otherwise implementation-defined
int rw_prov_init(void);

#ifdef __cplusplus
}
#endif

#endif
