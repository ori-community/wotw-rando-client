#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Security::Cryptography::SHA256 {
    IL2CPP_REGISTER_METHOD(0x028F7B70, void, ctor, (app::SHA256 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x028F7B80, app::SHA256*, Create_1, ())
    IL2CPP_REGISTER_METHOD(0x028F7CC0, app::SHA256*, Create_2, (app::String * hash_name))
} // namespace app::classes::System::Security::Cryptography::SHA256
