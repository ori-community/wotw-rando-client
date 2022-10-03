#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Security::Cryptography::TripleDESTransform {
    IL2CPP_REGISTER_METHOD(0x01E13600, void, ctor, (app::TripleDESTransform * this_ptr, app::TripleDES* algo, bool encryption, app::Byte__Array* key, app::Byte__Array* iv))
    IL2CPP_REGISTER_METHODINFO(0x0473AF18, TripleDESTransform__ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01E13E60, void, ECB, (app::TripleDESTransform * this_ptr, app::Byte__Array* input, app::Byte__Array* output))
    IL2CPP_REGISTER_METHOD(0x01E14050, app::Byte__Array*, GetStrongKey, ())
} // namespace app::classes::System::Security::Cryptography::TripleDESTransform
