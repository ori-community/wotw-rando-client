#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsymmetricAlgorithm.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/DSASignatureDeformatter.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Security::Cryptography::DSASignatureDeformatter {
    IL2CPP_REGISTER_METHOD(0x020D72C0, void, ctor_1, app::DSASignatureDeformatter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x020D7360, void, ctor_2, app::DSASignatureDeformatter* this_ptr, app::AsymmetricAlgorithm* key)
    IL2CPP_REGISTER_METHOD(0x020D7470, void, SetKey, app::DSASignatureDeformatter* this_ptr, app::AsymmetricAlgorithm* key)
    IL2CPP_REGISTER_METHOD(0x020D7580, void, SetHashAlgorithm, app::DSASignatureDeformatter* this_ptr, app::String* str_name)
    IL2CPP_REGISTER_METHOD(
        0x020D7690,
        bool,
        VerifySignature,
        app::DSASignatureDeformatter* this_ptr,
        app::Byte__Array* rgb_hash,
        app::Byte__Array* rgb_signature
    )
} // namespace app::classes::System::Security::Cryptography::DSASignatureDeformatter
