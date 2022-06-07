#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Mono::Security::Protocol::Tls::ServerContext {
    IL2CPP_REGISTER_METHOD(0x005B0220, app::SslServerStream *, get_SslStream, (app::ServerContext * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0186C330, bool, get_ClientCertificateRequired, (app::ServerContext * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008A6E90, bool, get_RequestClientCertificate, (app::ServerContext * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F7B580, void, ctor, (app::ServerContext * this_ptr, app::SslServerStream * stream, app::SecurityProtocolType__Enum_1 security_protocol_type, app::X509Certificate_1 * server_certificate, bool client_certificate_required, bool request_client_certificate))
}
