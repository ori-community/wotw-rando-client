#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsymmetricSignatureFormatter.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/HashAlgorithm.h>

namespace app::classes::System::Security::Cryptography::AsymmetricSignatureFormatter {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::AsymmetricSignatureFormatter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x020C8FB0, app::Byte__Array*, CreateSignature, app::AsymmetricSignatureFormatter* this_ptr, app::HashAlgorithm* hash)
} // namespace app::classes::System::Security::Cryptography::AsymmetricSignatureFormatter
