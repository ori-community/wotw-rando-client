#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Security::Cryptography::AsymmetricSignatureFormatter {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::AsymmetricSignatureFormatter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020C8FB0, app::Byte__Array*, CreateSignature, (app::AsymmetricSignatureFormatter * this_ptr, app::HashAlgorithm* hash))
    IL2CPP_REGISTER_METHODINFO(0x0474A678, AsymmetricSignatureFormatter_CreateSignature__MethodInfo)
} // namespace app::classes::System::Security::Cryptography::AsymmetricSignatureFormatter
