#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Security::Cryptography::AsymmetricSignatureDeformatter {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::AsymmetricSignatureDeformatter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020C8E90, bool, VerifySignature, (app::AsymmetricSignatureDeformatter * this_ptr, app::HashAlgorithm* hash, app::Byte__Array* rgb_signature))
    IL2CPP_REGISTER_METHODINFO(0x0477F7A0, AsymmetricSignatureDeformatter_VerifySignature__MethodInfo)
} // namespace app::classes::System::Security::Cryptography::AsymmetricSignatureDeformatter
