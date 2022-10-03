#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Vector2Helper {
    IL2CPP_REGISTER_METHOD(0x013BB100, float, Cross, (app::Vector2 v, app::Vector2 w))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::Vector2Helper * this_ptr))
} // namespace app::classes::Vector2Helper
