#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Moon::NanoProfilerDataProvider {
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_SupportsGraph, (app::NanoProfilerDataProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_SupportsInspector, (app::NanoProfilerDataProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C2F960, int32_t, get_HistorySize, (app::NanoProfilerDataProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C2F970, int32_t, get_NumMetrics, (app::NanoProfilerDataProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, get_NumMarkers, (app::NanoProfilerDataProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_SupportsMarkers, (app::NanoProfilerDataProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C2FA20, int32_t, get_CurrentFrameIndex, (app::NanoProfilerDataProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C2FB20, int32_t, get_LastCompletedFrameID, (app::NanoProfilerDataProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C2FC20, bool, get_IsPaused, (app::NanoProfilerDataProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C2FD70, app::List_1_Moon_Profile_Metric_*, get_SupportedMetrics, (app::NanoProfilerDataProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C2FE10, double, GetMetricValueInMS, (app::NanoProfilerDataProvider * this_ptr, app::Metric__Enum metric, int32_t frame))
    IL2CPP_REGISTER_METHOD(0x00C2FF80, double, GetLastCompletedMetricValueInMS, (app::NanoProfilerDataProvider * this_ptr, app::Metric__Enum metric))
    IL2CPP_REGISTER_METHOD(0x00C30100, void, AddPreEndFrameHandler, (app::NanoProfilerDataProvider * this_ptr, app::Action* action))
    IL2CPP_REGISTER_METHOD(0x00C30240, void, AddPostBeginFrameHandler, (app::NanoProfilerDataProvider * this_ptr, app::Action* action))
    IL2CPP_REGISTER_METHOD(0x00C30380, void, RemovePreEndFrameHandler, (app::NanoProfilerDataProvider * this_ptr, app::Action* action))
    IL2CPP_REGISTER_METHOD(0x00C30490, void, RemovePostBeginFrameHandler, (app::NanoProfilerDataProvider * this_ptr, app::Action* action))
    IL2CPP_REGISTER_METHOD(0x00C305A0, double, GetAverageMetricTimeInMSInFrameRange, (app::NanoProfilerDataProvider * this_ptr, app::Metric__Enum metric, int32_t start_frame, int32_t end_frame))
    IL2CPP_REGISTER_METHOD(0x00C30810, double, GetPeakMetricTimeInMSInFrameRange, (app::NanoProfilerDataProvider * this_ptr, app::Metric__Enum metric, int32_t start_frame, int32_t end_frame))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::NanoProfilerDataProvider * this_ptr))
} // namespace app::classes::Moon::NanoProfilerDataProvider
