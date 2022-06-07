#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::IsKeyboardSelectedCondition {
    IL2CPP_REGISTER_METHOD(0x00646840, bool, Validate, (app::IsKeyboardSelectedCondition * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::IsKeyboardSelectedCondition * this_ptr))
}
