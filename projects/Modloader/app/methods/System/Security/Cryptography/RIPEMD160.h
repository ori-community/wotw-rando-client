#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/RIPEMD160.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Security::Cryptography::RIPEMD160 {
    IL2CPP_REGISTER_METHOD(0x028E0840, void, ctor, app::RIPEMD160* this_ptr)
    IL2CPP_REGISTER_METHOD(0x028E0850, app::RIPEMD160*, Create_1, )
    IL2CPP_REGISTER_METHOD(0x028E0990, app::RIPEMD160*, Create_2, app::String* hash_name)
} // namespace app::classes::System::Security::Cryptography::RIPEMD160
