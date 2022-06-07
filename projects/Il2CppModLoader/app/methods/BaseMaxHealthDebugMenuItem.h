#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::BaseMaxHealthDebugMenuItem {
    IL2CPP_REGISTER_METHOD(0x00F86430, void, ctor, (app::BaseMaxHealthDebugMenuItem * this_ptr, app::String * path, app::String * str))
    IL2CPP_REGISTER_METHOD(0x00F86650, void, OnSelectedFixedUpdate, (app::BaseMaxHealthDebugMenuItem * this_ptr))
}
