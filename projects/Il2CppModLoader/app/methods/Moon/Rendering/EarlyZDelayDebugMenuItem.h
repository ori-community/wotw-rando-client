#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Moon::Rendering::EarlyZDelayDebugMenuItem {
    IL2CPP_REGISTER_METHOD(0x00789430, void, ctor, (app::EarlyZDelayDebugMenuItem * this_ptr, app::String* path, app::String* str))
    IL2CPP_REGISTER_METHOD(0x00789510, void, OnSelectedFixedUpdate, (app::EarlyZDelayDebugMenuItem * this_ptr))
} // namespace app::classes::Moon::Rendering::EarlyZDelayDebugMenuItem
