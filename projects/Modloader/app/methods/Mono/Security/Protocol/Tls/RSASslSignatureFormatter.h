#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/RSASslSignatureFormatter.h>
#include <Modloader/app/structs/AsymmetricAlgorithm.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::Mono::Security::Protocol::Tls::RSASslSignatureFormatter {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor_1, (app::RSASslSignatureFormatter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F76900, void, ctor_2, (app::RSASslSignatureFormatter * this_ptr, app::AsymmetricAlgorithm* key))
    IL2CPP_REGISTER_METHOD(0x01F76E00, app::Byte__Array*, CreateSignature, (app::RSASslSignatureFormatter * this_ptr, app::Byte__Array* rgb_hash))
    IL2CPP_REGISTER_METHODINFO(0x04754CF8, RSASslSignatureFormatter_CreateSignature__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01F77050, void, SetHashAlgorithm, (app::RSASslSignatureFormatter * this_ptr, app::String* str_name))
    IL2CPP_REGISTER_METHOD(0x01F771F0, void, SetKey, (app::RSASslSignatureFormatter * this_ptr, app::AsymmetricAlgorithm* key))
    IL2CPP_REGISTER_METHODINFO(0x0471AE10, RSASslSignatureFormatter_SetKey__MethodInfo)
} // namespace app::classes::Mono::Security::Protocol::Tls::RSASslSignatureFormatter
