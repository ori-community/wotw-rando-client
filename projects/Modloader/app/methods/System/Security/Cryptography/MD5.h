#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MD5.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Security::Cryptography::MD5 {
    IL2CPP_REGISTER_METHOD(0x020DD3E0, void, ctor, (app::MD5 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020DD3F0, app::MD5*, Create_1, ())
    IL2CPP_REGISTER_METHOD(0x020DD530, app::MD5*, Create_2, (app::String * alg_name))
} // namespace app::classes::System::Security::Cryptography::MD5
