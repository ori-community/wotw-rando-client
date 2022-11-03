#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Mono::Security::Protocol::Tls::RSASslSignatureDeformatter {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor_1, (app::RSASslSignatureDeformatter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F76900, void, ctor_2, (app::RSASslSignatureDeformatter * this_ptr, app::AsymmetricAlgorithm* key))
    IL2CPP_REGISTER_METHOD(0x01F76920, bool, VerifySignature, (app::RSASslSignatureDeformatter * this_ptr, app::Byte__Array* rgb_hash, app::Byte__Array* rgb_signature))
    IL2CPP_REGISTER_METHODINFO(0x0477DC20, RSASslSignatureDeformatter_VerifySignature__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01F76B30, void, SetHashAlgorithm, (app::RSASslSignatureDeformatter * this_ptr, app::String* str_name))
    IL2CPP_REGISTER_METHOD(0x01F76CD0, void, SetKey, (app::RSASslSignatureDeformatter * this_ptr, app::AsymmetricAlgorithm* key))
    IL2CPP_REGISTER_METHODINFO(0x04737740, RSASslSignatureDeformatter_SetKey__MethodInfo)
} // namespace app::classes::Mono::Security::Protocol::Tls::RSASslSignatureDeformatter
