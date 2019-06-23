// Copyright (c) 2017-2018 The Libra Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef LIBRA_WALLET_WALLETUTIL_H
#define LIBRA_WALLET_WALLETUTIL_H

#include <chainparamsbase.h>
#include <util.h>

//! Get the path of the wallet directory.
fs::path GetWalletDir();

#endif // LIBRA_WALLET_WALLETUTIL_H
