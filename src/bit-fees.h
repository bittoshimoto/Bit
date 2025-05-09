// Copyright (c) 2021 The Dogecoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef BITCOIN_PEPECOIN_FEES_H
#define BITCOIN_PEPECOIN_FEES_H

#include "amount.h"
#include "chain.h"
#include "chainparams.h"

#ifdef ENABLE_WALLET

enum FeeRatePreset
{
    MINIMUM,
    LOW,
    MODERATE,
    HIGH,
    VERY_HIGH,
    MAXIMUM
};

/** Estimate fee rate needed to get into the next nBlocks */
CFeeRate GetBitFeeRate(int priority);
const std::string GetBitPriorityLabel(int priority);
#endif // ENABLE_WALLET
CAmount GetBitMinRelayFee(const CTransaction& tx, unsigned int nBytes, bool fAllowFree);
CAmount GetBitDustFee(const std::vector<CTxOut> &vout, const CAmount dustLimit);

#endif // BITCOIN_PEPECOIN_FEES_H
