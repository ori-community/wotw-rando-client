#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/FPSMonitor.h>
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/DroppedFrameMonitor.h>
#include <Modloader/app/structs/FPSMonitor_FrameTimingData.h>

namespace app::classes::FPSMonitor {
    IL2CPP_REGISTER_METHOD(0x004994E0, float, get_FrameTime, (app::FPSMonitor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00989390, float, get_FrameTimeMilliseconds, (app::FPSMonitor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006A45A0, float, get_RenderedFrames, (app::FPSMonitor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009893A0, void, CreateInstance, ())
    IL2CPP_REGISTER_METHOD(0x002FB990, app::DroppedFrameMonitor*, get_DroppedFrameMonitor, (app::FPSMonitor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00989540, void, Awake, (app::FPSMonitor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00989840, void, Start, (app::FPSMonitor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00989850, void, Update, (app::FPSMonitor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00989B60, void, Reset, (app::FPSMonitor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00653FB0, int32_t, get_HitchCount, (app::FPSMonitor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00989BF0, int32_t, get_SlowdownCount, (app::FPSMonitor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00989C00, int32_t, get_Health, (app::FPSMonitor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00989C40, app::FPSMonitor_FrameTimingData*, GetFrameAtIndex, (app::FPSMonitor * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x00989C80, app::FPSMonitor_FrameTimingData*, GetFrameAtOffset, (app::FPSMonitor * this_ptr, int32_t offset))
    IL2CPP_REGISTER_METHOD(0x00989CF0, app::FPSMonitor_FrameTimingData*, get_CurrentFrame, (app::FPSMonitor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00989D60, int32_t, get_HistoryLength, (app::FPSMonitor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00989D70, int32_t, GetFrameIndexAtOffset, (app::FPSMonitor * this_ptr, int32_t offset))
    IL2CPP_REGISTER_METHOD(0x00989DA0, void, FPSMonitorUpdate, (app::FPSMonitor * this_ptr, float delta_time))
    IL2CPP_REGISTER_METHOD(0x0098A0E0, float, CalculateNewAverageTime, (app::FPSMonitor * this_ptr, int32_t frame_count_for_average, float previous_average, float delta_time))
    IL2CPP_REGISTER_METHOD(0x0098A170, void, DumpData, (app::FPSMonitor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0098A350, app::Color, GetColorForGPUHealth, (int32_t health))
    IL2CPP_REGISTER_METHOD(0x0098A540, int32_t, GetGPUHealth, (int32_t drs_scale, float gpu_time))
    IL2CPP_REGISTER_METHOD(0x0098A8C0, void, ctor, (app::FPSMonitor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0098A980, void, cctor, ())
} // namespace app::classes::FPSMonitor
