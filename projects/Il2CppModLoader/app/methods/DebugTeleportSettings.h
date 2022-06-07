#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::DebugTeleportSettings {
    IL2CPP_REGISTER_METHOD(0x002FCE30, bool, ShowPositionOverride, (app::DebugTeleportSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B7E3E0, void, ApplyState, (app::DebugTeleportSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004140E0, void, ctor, (app::DebugTeleportSettings * this_ptr))
}
