#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsymmetricSignatureDeformatter.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/HashAlgorithm.h>

namespace app::classes::System::Security::Cryptography::AsymmetricSignatureDeformatter {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::AsymmetricSignatureDeformatter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020C8E90, bool, VerifySignature, (app::AsymmetricSignatureDeformatter * this_ptr, app::HashAlgorithm* hash, app::Byte__Array* rgb_signature))
} // namespace app::classes::System::Security::Cryptography::AsymmetricSignatureDeformatter
