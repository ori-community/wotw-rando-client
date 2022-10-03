#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::BreakableWallVisuals {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnChangeState, (app::BreakableWallVisuals * this_ptr, int32_t state_index))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::BreakableWallVisuals * this_ptr))
} // namespace app::classes::BreakableWallVisuals
