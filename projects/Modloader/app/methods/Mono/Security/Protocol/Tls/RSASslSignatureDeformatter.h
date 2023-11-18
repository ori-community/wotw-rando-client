#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/RSASslSignatureDeformatter.h>
#include <Modloader/app/structs/AsymmetricAlgorithm.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::Mono::Security::Protocol::Tls::RSASslSignatureDeformatter {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor_1, (app::RSASslSignatureDeformatter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F76900, void, ctor_2, (app::RSASslSignatureDeformatter * this_ptr, app::AsymmetricAlgorithm* key))
    IL2CPP_REGISTER_METHOD(0x01F76920, bool, VerifySignature, (app::RSASslSignatureDeformatter * this_ptr, app::Byte__Array* rgb_hash, app::Byte__Array* rgb_signature))
    IL2CPP_REGISTER_METHOD(0x01F76B30, void, SetHashAlgorithm, (app::RSASslSignatureDeformatter * this_ptr, app::String* str_name))
    IL2CPP_REGISTER_METHOD(0x01F76CD0, void, SetKey, (app::RSASslSignatureDeformatter * this_ptr, app::AsymmetricAlgorithm* key))
} // namespace app::classes::Mono::Security::Protocol::Tls::RSASslSignatureDeformatter
