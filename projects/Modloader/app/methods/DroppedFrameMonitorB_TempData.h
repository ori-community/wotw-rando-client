#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::DroppedFrameMonitorB_TempData {
    IL2CPP_REGISTER_METHOD(0x00A3F4E0, void, ctor, (app::DroppedFrameMonitorB_TempData * this_ptr, float time, app::DroppedFrameMonitor_FrameState__Enum state))
    IL2CPP_REGISTER_METHOD(0x00A3F4E0, void, Update, (app::DroppedFrameMonitorB_TempData * this_ptr, float time, app::DroppedFrameMonitor_FrameState__Enum state))
} // namespace app::classes::DroppedFrameMonitorB_TempData
