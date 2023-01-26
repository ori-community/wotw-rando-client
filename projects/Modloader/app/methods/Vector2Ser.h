#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Vector2Ser.h>
#include <Modloader/app/structs/Vector2.h>

namespace app::classes::Vector2Ser {
    IL2CPP_REGISTER_METHOD(0x006D39E0, void, ctor_1, (app::Vector2Ser * this_ptr, float x, float y))
    IL2CPP_REGISTER_METHOD(0x0111CA50, void, ctor_2, (app::Vector2Ser * this_ptr, app::Vector2 vector2))
    IL2CPP_REGISTER_METHOD(0x00F28550, app::Vector2, ToVector2, (app::Vector2Ser * this_ptr))
} // namespace app::classes::Vector2Ser
