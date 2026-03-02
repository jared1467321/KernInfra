#ifndef KERNINFRA_HPP
#define KERNINFRA_HPP

#include <unistd.h>
#include <stdarg.h>

#include "includes/sysvers.h"
#include "includes/kern_context.h"

// Include C headers normally — DO NOT wrap in extern "C"
#include "rw_prov/rw_prov.h"
#include "patchfinder/libdimentio.h"

#include "kernstructs.hpp"
#include "kern_func.hpp"

#ifdef __cplusplus
extern "C" {
#endif

int init_kerninfra(int logLevel, void (*vDoLog)(const char *, va_list) = NULL);

#ifdef __cplusplus
}
#endif

#endif
