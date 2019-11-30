/**
 *  @file
 *  @copyright defined in eos/LICENSE
 */
#pragma once

namespace eosio {
   namespace internal_use_do_not_use {
      extern "C" {
         __attribute__((eosio_wasm_import))
         int32_t generate_random();
      }
   }

   inline int32_t generate_random() {
     return internal_use_do_not_use::generate_random();
   }
}
