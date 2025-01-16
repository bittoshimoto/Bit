// Copyright (c) 2009-2010 Satoshi Nakamoto
// Copyright (c) 2009-2020 The Bitcoin Core developers
// Copyright (c) 2024 The Bit Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef BIT_CONSENSUS_AMOUNT_H
#define BIT_CONSENSUS_AMOUNT_H

#include <cstdint>

/** Amount in toshis (Can be negative) */
typedef int64_t CAmount;

/** The amount of toshis in one B1T. */
static constexpr CAmount COIN = 100000000;

/** No amount larger than this (in toshi) is valid.
 *
 * Note that this constant is *not* the total money supply, which in Bit
 * currently happens to be less than 21,000,000 B1T for various reasons, but
 * rather a sanity check. As this sanity check is used by consensus-critical
 * validation code, the exact value of the MAX_MONEY constant is consensus
 * critical; in unusual circumstances like a(nother) overflow bug that allowed
 * for the creation of coins out of thin air modification could lead to a fork.
 * */
static constexpr CAmount MAX_MONEY = 2100000 * COIN;
inline bool MoneyRange(const CAmount& nValue) { return (nValue >= 0 && nValue <= MAX_MONEY); }

#endif // BIT_CONSENSUS_AMOUNT_H
