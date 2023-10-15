// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef QUICHE_QUIC_CORE_CRYPTO_QUIC_CRYPTO_PROOF_H_
#define QUICHE_QUIC_CORE_CRYPTO_QUIC_CRYPTO_PROOF_H_

#include <string>

#include "quiche/quic/platform/api/quic_export.h"

namespace quic {

// Contains the crypto-related data provided by ProofSource
struct QUICHE_EXPORT QuicCryptoProof {
  QuicCryptoProof();

  // Signature generated by ProofSource
  std::string signature;
  // SCTList (RFC6962) to be sent to the client, if it supports receiving it.
  std::string leaf_cert_scts;
  // Should the Expect-CT header be sent on the connection where the
  // certificate is used.
  bool send_expect_ct_header;
  // Did the selected leaf certificate contain a SubjectAltName that included
  // the requested SNI.
  bool cert_matched_sni;
};

}  // namespace quic

#endif  // QUICHE_QUIC_CORE_CRYPTO_QUIC_CRYPTO_PROOF_H_
