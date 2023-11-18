#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Rijndael.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Security::Cryptography::Rijndael {
    IL2CPP_REGISTER_METHOD(0x028EFAC0, void, ctor, (app::Rijndael * this_ptr))
    IL2CPP_REGISTER_METHOD(0x028EFBA0, app::Rijndael*, Create_1, ())
    IL2CPP_REGISTER_METHOD(0x028EFCE0, app::Rijndael*, Create_2, (app::String * alg_name))
    IL2CPP_REGISTER_METHOD(0x028EFDC0, void, cctor, ())
} // namespace app::classes::System::Security::Cryptography::Rijndael
