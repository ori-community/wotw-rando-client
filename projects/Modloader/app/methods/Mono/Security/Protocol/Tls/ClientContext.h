#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SslClientStream.h>
#include <Modloader/app/structs/ClientContext.h>
#include <Modloader/app/structs/SecurityProtocolType__Enum_1.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/X509CertificateCollection_1.h>

namespace app::classes::Mono::Security::Protocol::Tls::ClientContext {
    IL2CPP_REGISTER_METHOD(0x005B0220, app::SslClientStream*, get_SslStream, (app::ClientContext * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F663B0, int16_t, get_ClientHelloProtocol, (app::ClientContext * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F663C0, void, set_ClientHelloProtocol, (app::ClientContext * this_ptr, int16_t value))
    IL2CPP_REGISTER_METHOD(0x01F663D0, void, ctor, (app::ClientContext * this_ptr, app::SslClientStream* stream, app::SecurityProtocolType__Enum_1 security_protocol_type, app::String* target_host, app::X509CertificateCollection_1* client_certificates))
    IL2CPP_REGISTER_METHOD(0x01F66440, void, Clear, (app::ClientContext * this_ptr))
} // namespace app::classes::Mono::Security::Protocol::Tls::ClientContext
