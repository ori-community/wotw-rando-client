#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Mono::Security::Cryptography::MD4 {
    IL2CPP_REGISTER_METHOD(0x020DD3E0, void, ctor_1, (app::MD4 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025CF200, app::MD4 *, Create_1, ())
    IL2CPP_REGISTER_METHOD(0x020DD3E0, void, ctor_2, (app::MD4_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A3D9D0, app::MD4_1 *, Create_2, ())
}
