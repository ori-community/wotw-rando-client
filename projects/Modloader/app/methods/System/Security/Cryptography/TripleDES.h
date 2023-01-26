#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/TripleDES.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Security::Cryptography::TripleDES {
    IL2CPP_REGISTER_METHOD(0x01E12060, void, ctor, (app::TripleDES * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E12140, app::Byte__Array*, get_Key, (app::TripleDES * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E122E0, void, set_Key, (app::TripleDES * this_ptr, app::Byte__Array* value))
    IL2CPP_REGISTER_METHOD(0x01E12530, app::TripleDES*, Create_1, ())
    IL2CPP_REGISTER_METHOD(0x01E12670, app::TripleDES*, Create_2, (app::String * str))
    IL2CPP_REGISTER_METHOD(0x01E12750, bool, IsWeakKey, (app::Byte__Array * rgb_key))
    IL2CPP_REGISTER_METHOD(0x01E12900, bool, EqualBytes, (app::Byte__Array * rgb_key, int32_t start1, int32_t start2, int32_t count))
    IL2CPP_REGISTER_METHOD(0x01E12B40, bool, IsLegalKeySize, (app::Byte__Array * rgb_key))
    IL2CPP_REGISTER_METHOD(0x01E12B60, void, cctor, ())
} // namespace app::classes::System::Security::Cryptography::TripleDES
