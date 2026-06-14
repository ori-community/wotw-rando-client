#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/HttpWebRequest.h>
#include <Modloader/app/structs/HttpsClientStream.h>
#include <Modloader/app/structs/Int32__Array.h>
#include <Modloader/app/structs/Stream.h>
#include <Modloader/app/structs/X509CertificateCollection_1.h>
#include <Modloader/app/structs/X509Certificate_1.h>

namespace app::classes::Mono::Security::Protocol::Tls::HttpsClientStream {
    IL2CPP_REGISTER_METHOD(
        0x01F75C00,
        void,
        ctor,
        app::HttpsClientStream* this_ptr,
        app::Stream* stream,
        app::X509CertificateCollection_1* client_certificates,
        app::HttpWebRequest* request,
        app::Byte__Array* buffer
    )
    IL2CPP_REGISTER_METHOD(0x01F76170, bool, get_TrustFailure, app::HttpsClientStream* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x01F76190,
        bool,
        RaiseServerCertificateValidation,
        app::HttpsClientStream* this_ptr,
        app::X509Certificate_1* certificate,
        app::Int32__Array* certificate_errors
    )
} // namespace app::classes::Mono::Security::Protocol::Tls::HttpsClientStream
