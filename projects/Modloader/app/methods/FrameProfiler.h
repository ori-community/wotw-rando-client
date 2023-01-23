#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/FrameProfiler.h>
#include <Modloader/app/structs/Metric__Enum.h>
#include <Modloader/app/structs/FrameProfiler_FrameData.h>

namespace app::classes::FrameProfiler {
    IL2CPP_REGISTER_METHOD(0x03150900, bool, get_Enabled, ())
    IL2CPP_REGISTER_METHOD(0x031509B0, void, set_Enabled, (bool value))
    IL2CPP_REGISTER_METHOD(0x03150BD0, int64_t, GetFrameTimeInNanoSeconds, (app::FrameProfiler * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03150CA0, void, ctor, (app::FrameProfiler * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03151410, void, DoBeginFrame, (app::FrameProfiler * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, DoEndFrame, (app::FrameProfiler * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03151640, void, DoBeginMetric, (app::FrameProfiler * this_ptr, app::Metric__Enum metric))
    IL2CPP_REGISTER_METHOD(0x03151770, void, DoEndMetric, (app::FrameProfiler * this_ptr, app::Metric__Enum metric))
    IL2CPP_REGISTER_METHOD(0x031518B0, void, BeginMetric, (app::Metric__Enum metric))
    IL2CPP_REGISTER_METHOD(0x03151A70, void, EndMetric, (app::Metric__Enum metric))
    IL2CPP_REGISTER_METHOD(0x03151C40, void, BeginFrame, ())
    IL2CPP_REGISTER_METHOD(0x03151CF0, void, EndFrame, ())
    IL2CPP_REGISTER_METHOD(0x03151D80, app::FrameProfiler_FrameData*, GetLastCompletedFrame, (app::FrameProfiler * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03151DC0, void, cctor, ())
} // namespace app::classes::FrameProfiler
