#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Vector4Ser.h>
#include <Modloader/app/structs/Vector4.h>
#include <Modloader/app/structs/Quaternion.h>

namespace app::classes::Vector4Ser {
    IL2CPP_REGISTER_METHOD(0x013BB150, void, ctor_1, (app::Vector4Ser * this_ptr, float x, float y, float z, float w))
    IL2CPP_REGISTER_METHOD(0x013BB170, void, ctor_2, (app::Vector4Ser * this_ptr, app::Vector4 vector4))
    IL2CPP_REGISTER_METHOD(0x013BB170, void, ctor_3, (app::Vector4Ser * this_ptr, app::Quaternion quatenion))
    IL2CPP_REGISTER_METHOD(0x013BB1A0, app::Vector4, ToVector4, (app::Vector4Ser * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013BB1A0, app::Quaternion, ToQuartenion, (app::Vector4Ser * this_ptr))
} // namespace app::classes::Vector4Ser
