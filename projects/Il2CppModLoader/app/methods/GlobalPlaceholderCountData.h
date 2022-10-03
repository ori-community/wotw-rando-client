#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::GlobalPlaceholderCountData {
    IL2CPP_REGISTER_METHOD(0x007F7B50, void, Reset, (app::GlobalPlaceholderCountData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, AddItem, (app::GlobalPlaceholderCountData * this_ptr, app::ScreenshotIcon_EnemyType__Enum icon, int32_t difficulty, int32_t zone_i_d))
    IL2CPP_REGISTER_METHOD(0x004140E0, void, ctor, (app::GlobalPlaceholderCountData * this_ptr))
} // namespace app::classes::GlobalPlaceholderCountData
