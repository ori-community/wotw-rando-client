#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Mono::Unity::UnityTlsProvider {
    IL2CPP_REGISTER_METHOD(0x024912D0, app::String *, get_Name, (app::UnityTlsProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02491350, app::Guid, get_ID, (app::UnityTlsProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_SupportsSslStream, (app::UnityTlsProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_SupportsMonoExtensions, (app::UnityTlsProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_SupportsConnectionInfo, (app::UnityTlsProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_SupportsCleanShutdown, (app::UnityTlsProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02491400, app::SslProtocols__Enum, get_SupportedProtocols, (app::UnityTlsProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02491410, app::IMonoSslStream *, CreateSslStream, (app::UnityTlsProvider * this_ptr, app::Stream * inner_stream, bool leave_inner_stream_open, app::MonoTlsSettings * settings))
    IL2CPP_REGISTER_METHOD(0x02491430, app::IMonoSslStream *, CreateSslStreamInternal, (app::UnityTlsProvider * this_ptr, app::SslStream * ssl_stream, app::Stream * inner_stream, bool leave_inner_stream_open, app::MonoTlsSettings * settings))
    IL2CPP_REGISTER_METHOD(0x02491630, bool, ValidateCertificate, (app::UnityTlsProvider * this_ptr, app::ICertificateValidator2 * validator, app::String * target_host, bool server_mode, app::X509CertificateCollection_1 * certificates, bool wants_chain, app::X509Chain * * chain, app::MonoSslPolicyErrors__Enum * errors, int32_t * status11))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::UnityTlsProvider * this_ptr))
}
