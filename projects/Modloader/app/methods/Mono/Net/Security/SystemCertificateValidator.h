#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MonoTlsSettings.h>
#include <Modloader/app/structs/X509CertificateCollection_1.h>
#include <Modloader/app/structs/X509Chain.h>

namespace app::classes::Mono::Net::Security::SystemCertificateValidator {
    IL2CPP_REGISTER_METHOD(0x02185DB0, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x02185E70, app::X509Chain*, CreateX509Chain, app::X509CertificateCollection_1* certs)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, NeedsChain, app::MonoTlsSettings* settings)
} // namespace app::classes::Mono::Net::Security::SystemCertificateValidator
