#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsymmetricAlgorithm.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/RSAPKCS1SignatureDeformatter.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Security::Cryptography::RSAPKCS1SignatureDeformatter {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor_1, app::RSAPKCS1SignatureDeformatter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01F76900, void, ctor_2, app::RSAPKCS1SignatureDeformatter* this_ptr, app::AsymmetricAlgorithm* key)
    IL2CPP_REGISTER_METHOD(0x028ED210, void, SetHashAlgorithm, app::RSAPKCS1SignatureDeformatter* this_ptr, app::String* str_name)
    IL2CPP_REGISTER_METHOD(0x028ED2D0, void, SetKey, app::RSAPKCS1SignatureDeformatter* this_ptr, app::AsymmetricAlgorithm* key)
    IL2CPP_REGISTER_METHOD(
        0x028ED3E0,
        bool,
        VerifySignature,
        app::RSAPKCS1SignatureDeformatter* this_ptr,
        app::Byte__Array* rgb_hash,
        app::Byte__Array* rgb_signature
    )
} // namespace app::classes::System::Security::Cryptography::RSAPKCS1SignatureDeformatter
