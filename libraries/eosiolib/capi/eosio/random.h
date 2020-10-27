/**
 *  @file
 *  @copyright defined in eos/LICENSE
 */
#pragma once
#include "types.h"
#ifdef __cplusplus
extern "C" {
#endif

__attribute__((eosio_wasm_import))
int32_t generate_random();

#ifdef __cplusplus
}
#endif
