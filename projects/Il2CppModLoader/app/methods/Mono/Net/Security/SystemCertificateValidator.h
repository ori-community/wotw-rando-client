#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Mono::Net::Security::SystemCertificateValidator {
    IL2CPP_REGISTER_METHOD(0x02185DB0, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x02185E70, app::X509Chain *, CreateX509Chain, (app::X509CertificateCollection_1 * certs))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, NeedsChain, (app::MonoTlsSettings * settings))
}
