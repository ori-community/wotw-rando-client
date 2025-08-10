#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/UnityTls_unitytls_errorstate.h>
#include <Modloader/app/structs/UnityTls_unitytls_x509list.h>
#include <Modloader/app/structs/UnityTls_unitytls_x509list_ref.h>
#include <Modloader/app/structs/X509CertificateCollection_1.h>
#include <Modloader/app/structs/X509Certificate_1.h>

namespace app::classes::Mono::Unity::CertHelper {
    IL2CPP_REGISTER_METHOD(
        0x02186110,
        void,
        AddCertificatesToNativeChain,
        app::UnityTls_unitytls_x509list* native_certificate_chain,
        app::X509CertificateCollection_1* certificates,
        app::UnityTls_unitytls_errorstate* error_state
    )
    IL2CPP_REGISTER_METHOD(
        0x02186280,
        void,
        AddCertificateToNativeChain,
        app::UnityTls_unitytls_x509list* native_certificate_chain,
        app::X509Certificate_1* certificate,
        app::UnityTls_unitytls_errorstate* error_state
    )
    IL2CPP_REGISTER_METHOD(
        0x021865F0,
        app::X509CertificateCollection_1*,
        NativeChainToManagedCollection,
        app::UnityTls_unitytls_x509list_ref native_certificate_chain,
        app::UnityTls_unitytls_errorstate* error_state
    )
} // namespace app::classes::Mono::Unity::CertHelper
