#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/RSAPKCS1SignatureFormatter.h>
#include <Modloader/app/structs/AsymmetricAlgorithm.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Security::Cryptography::RSAPKCS1SignatureFormatter {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor_1, (app::RSAPKCS1SignatureFormatter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F76900, void, ctor_2, (app::RSAPKCS1SignatureFormatter * this_ptr, app::AsymmetricAlgorithm* key))
    IL2CPP_REGISTER_METHOD(0x028ED8B0, app::Byte__Array*, CreateSignature, (app::RSAPKCS1SignatureFormatter * this_ptr, app::Byte__Array* rgb_hash))
    IL2CPP_REGISTER_METHOD(0x028EDA30, void, SetHashAlgorithm, (app::RSAPKCS1SignatureFormatter * this_ptr, app::String* str_name))
    IL2CPP_REGISTER_METHOD(0x028EDAF0, void, SetKey, (app::RSAPKCS1SignatureFormatter * this_ptr, app::AsymmetricAlgorithm* key))
} // namespace app::classes::System::Security::Cryptography::RSAPKCS1SignatureFormatter
