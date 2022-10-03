#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::DroppedFrameMonitor_TempData {
    IL2CPP_REGISTER_METHOD(0x00A3F4E0, void, ctor, (app::DroppedFrameMonitor_TempData * this_ptr, float time, app::DroppedFrameMonitor_FrameState__Enum state))
    IL2CPP_REGISTER_METHOD(0x00A3F4E0, void, Update, (app::DroppedFrameMonitor_TempData * this_ptr, float time, app::DroppedFrameMonitor_FrameState__Enum state))
} // namespace app::classes::DroppedFrameMonitor_TempData
