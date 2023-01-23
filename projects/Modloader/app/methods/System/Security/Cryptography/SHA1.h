#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SHA1.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Security::Cryptography::SHA1 {
    IL2CPP_REGISTER_METHOD(0x028E0840, void, ctor, (app::SHA1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x028F4470, app::SHA1*, Create_1, ())
    IL2CPP_REGISTER_METHOD(0x028F45B0, app::SHA1*, Create_2, (app::String * hash_name))
} // namespace app::classes::System::Security::Cryptography::SHA1
