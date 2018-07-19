// Copyright 2013 Google Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
// ========================================================================

// The parameters of the current code signing Authenticode certificates. For
// security reasons, the checks involving Authenticode not only check the
// subject of the certificate but they check that specific certificates have
// been used to sign.
// The SHA256 hashes of the certificate RSA public keys are defined below.

#ifndef OMAHA_BASE_CONST_CODE_SIGNING_H_
#define OMAHA_BASE_CONST_CODE_SIGNING_H_

#include <windows.h>
#include <tchar.h>

namespace omaha {

// The company and organization names expected in the code
// signing certificates which are trusted.
const TCHAR* const kCertificateSubjectName = _T("Brave Software, Inc.");
const TCHAR* const kSha256CertificateSubjectName = _T("Brave Software, Inc.");

// The Omaha certificate thumbprint. Used by unit tests.
const TCHAR* const kCertificateThumbprint =
    _T("1a6ac0549a4a44264deb6ff003391da2f285b19f");
const TCHAR* const kSha256CertificateThumbprint =
    _T("d8fb5fd2ec5048777426e06e40e9a07d2a31a958");

// The SHA256 hash of the Omaha certificate RSA public key.
const TCHAR* const kCertificatePublicKeyHash =
    _T("d49de35a2e9fdbed09e2b9a6c1243df414d6aac13690ab221b0017a5cbe1351f");
const TCHAR* const kSha256CertificatePublicKeyHash =
    _T("970628f78b25493dab9ccd40de939c193cba695b922bc203f8f2c4c6b899fb61");

// The hash of public keys that we pin the code signing certificates to.
// For quick identification, the date and thumbprint of the certificates are
// provide below. The hash is the SHA256 hash of the raw certificate RSA public
// key bytes in DER format.
const TCHAR* const kPublicKeyHashes[] = {
// Only trust the brave sha256 cert
kSha256CertificatePublicKeyHash,
};

}  // namespace omaha

#endif  // OMAHA_BASE_CONST_CODE_SIGNING_H_
