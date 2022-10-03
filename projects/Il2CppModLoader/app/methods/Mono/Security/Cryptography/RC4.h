#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Mono::Security::Cryptography::RC4 {
    IL2CPP_REGISTER_METHOD(0x025D48D0, void, ctor_1, (app::RC4 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025D49B0, app::Byte__Array*, get_IV_1, (app::RC4 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, set_IV_1, (app::RC4 * this_ptr, app::Byte__Array* value))
    IL2CPP_REGISTER_METHOD(0x025D4A30, app::RC4*, Create_1, ())
    IL2CPP_REGISTER_METHOD(0x025D4CC0, void, cctor_1, ())
    IL2CPP_REGISTER_METHOD(0x02A42C50, void, ctor_2, (app::RC4_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A42D30, app::Byte__Array*, get_IV_2, (app::RC4_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, set_IV_2, (app::RC4_1 * this_ptr, app::Byte__Array* value))
    IL2CPP_REGISTER_METHOD(0x02A42DB0, app::RC4_1*, Create_2, ())
    IL2CPP_REGISTER_METHOD(0x02A42EF0, void, cctor_2, ())
} // namespace app::classes::Mono::Security::Cryptography::RC4
