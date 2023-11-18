#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/FPSMonitor_FrameTimingData.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::FPSMonitor_FrameTimingData {
    IL2CPP_REGISTER_METHOD(0x0098AB30, void, Reset, (app::FPSMonitor_FrameTimingData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0098AB40, app::String*, ToString, (app::FPSMonitor_FrameTimingData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::FPSMonitor_FrameTimingData * this_ptr))
} // namespace app::classes::FPSMonitor_FrameTimingData
