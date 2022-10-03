#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::WasLastInputKeyboardCondition {
    IL2CPP_REGISTER_METHOD(0x008D36D0, bool, Validate, (app::WasLastInputKeyboardCondition * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::WasLastInputKeyboardCondition * this_ptr))
} // namespace app::classes::WasLastInputKeyboardCondition
