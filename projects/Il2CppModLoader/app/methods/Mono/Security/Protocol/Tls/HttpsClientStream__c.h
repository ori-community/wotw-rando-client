#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Mono::Security::Protocol::Tls::HttpsClientStream___c {
    IL2CPP_REGISTER_METHOD(0x01F76680, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::HttpsClientStream_c * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F767C0, app::X509Certificate_1 *, __ctor_b__2_0, (app::HttpsClientStream_c * this_ptr, app::X509CertificateCollection_1 * client_certs, app::X509Certificate_1 * server_certificate, app::String * target_host, app::X509CertificateCollection_1 * server_requested_certificates))
    IL2CPP_REGISTER_METHODINFO(0x0471AAA8, HttpsClientStream_c___ctor_b__2_0__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01F76810, app::AsymmetricAlgorithm *, __ctor_b__2_1, (app::HttpsClientStream_c * this_ptr, app::X509Certificate_1 * certificate, app::String * target_host))
    IL2CPP_REGISTER_METHODINFO(0x04777C98, HttpsClientStream_c___ctor_b__2_1__MethodInfo)
}
