#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsymmetricAlgorithm.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/DSASignatureFormatter.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Security::Cryptography::DSASignatureFormatter {
    IL2CPP_REGISTER_METHOD(0x020D7890, void, ctor_1, app::DSASignatureFormatter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x020D7930, void, ctor_2, app::DSASignatureFormatter* this_ptr, app::AsymmetricAlgorithm* key)
    IL2CPP_REGISTER_METHOD(0x020D7A40, void, SetKey, app::DSASignatureFormatter* this_ptr, app::AsymmetricAlgorithm* key)
    IL2CPP_REGISTER_METHOD(0x020D7B50, void, SetHashAlgorithm, app::DSASignatureFormatter* this_ptr, app::String* str_name)
    IL2CPP_REGISTER_METHOD(0x020D7C60, app::Byte__Array*, CreateSignature, app::DSASignatureFormatter* this_ptr, app::Byte__Array* rgb_hash)
} // namespace app::classes::System::Security::Cryptography::DSASignatureFormatter
