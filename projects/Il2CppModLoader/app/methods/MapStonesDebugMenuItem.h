#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::MapStonesDebugMenuItem {
    IL2CPP_REGISTER_METHOD(0x00A0ACA0, void, ctor, (app::MapStonesDebugMenuItem * this_ptr, app::String * path, app::String * str))
    IL2CPP_REGISTER_METHOD(0x00A0AE60, void, OnSelectedFixedUpdate, (app::MapStonesDebugMenuItem * this_ptr))
}
