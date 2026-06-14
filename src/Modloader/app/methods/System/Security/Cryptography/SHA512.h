#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SHA512.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Security::Cryptography::SHA512 {
    IL2CPP_REGISTER_METHOD(0x01E0E3C0, void, ctor, app::SHA512* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01E0E3D0, app::SHA512*, Create_1, )
    IL2CPP_REGISTER_METHOD(0x01E0E510, app::SHA512*, Create_2, app::String* hash_name)
} // namespace app::classes::System::Security::Cryptography::SHA512
