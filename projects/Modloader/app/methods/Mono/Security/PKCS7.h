#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Mono::Security::PKCS7 {
    IL2CPP_REGISTER_METHOD(0x02A472B0, app::ASN1_1*, AlgorithmIdentifier_1, (app::String * oid))
    IL2CPP_REGISTER_METHOD(0x02A474E0, app::ASN1_1*, AlgorithmIdentifier_2, (app::String * oid, app::ASN1_1* parameters))
} // namespace app::classes::Mono::Security::PKCS7
