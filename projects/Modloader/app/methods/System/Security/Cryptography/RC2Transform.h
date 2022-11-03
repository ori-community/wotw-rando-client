#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Security::Cryptography::RC2Transform {
    IL2CPP_REGISTER_METHOD(0x028DEFC0, void, ctor, (app::RC2Transform * this_ptr, app::RC2* rc2_algo, bool encryption, app::Byte__Array* key, app::Byte__Array* iv))
    IL2CPP_REGISTER_METHODINFO(0x04760F18, RC2Transform__ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x028DF770, void, ECB, (app::RC2Transform * this_ptr, app::Byte__Array* input, app::Byte__Array* output))
    IL2CPP_REGISTER_METHOD(0x028E0790, void, cctor, ())
} // namespace app::classes::System::Security::Cryptography::RC2Transform
