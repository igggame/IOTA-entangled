/*
 * Copyright (c) 2018 IOTA Stiftung
 * https://github.com/iotaledger/entangled
 *
 * Refer to the LICENSE file for licensing information
 */

#ifndef __COMMON_CONCENSUS_TRANSACTION_VALIDATOR_TRANSACTION_VALIDATOR_H__
#define __COMMON_CONCENSUS_TRANSACTION_VALIDATOR_TRANSACTION_VALIDATOR_H__

#include <stdbool.h>
#include <stdint.h>
#include "common/errors.h"

#include "common/storage/connection.h"
#include "consensus/tangle/tangle.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct transaction_validator_t {
  tangle_t *tangle;
  // TODO - lots
} transaction_validator_t;

extern retcode_t iota_consensus_transaction_validator_init(
    const tangle_t *tangle, transaction_validator_t *tv);

// TODO - complete

#ifdef __cplusplus
}
#endif

#endif  // __COMMON_CONCENSUS_TRANSACTION_VALIDATOR_TRANSACTION_VALIDATOR_H__