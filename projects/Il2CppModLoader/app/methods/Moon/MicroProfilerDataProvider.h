#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::MicroProfilerDataProvider {
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_SupportsGraph, (app::MicroProfilerDataProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_SupportsInspector, (app::MicroProfilerDataProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x031585D0, int32_t, get_HistorySize, (app::MicroProfilerDataProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x031585E0, int32_t, get_NumMetrics, (app::MicroProfilerDataProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0043D9A0, int32_t, get_NumMarkers, (app::MicroProfilerDataProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_SupportsMarkers, (app::MicroProfilerDataProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x031585F0, int32_t, get_CurrentFrameIndex, (app::MicroProfilerDataProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03158680, int32_t, get_LastCompletedFrameID, (app::MicroProfilerDataProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03158720, app::List_1_Moon_Profile_Metric_ *, get_SupportedMetrics, (app::MicroProfilerDataProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03158990, bool, get_IsPaused, (app::MicroProfilerDataProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03158AB0, double, GetMetricValueInMS, (app::MicroProfilerDataProvider * this_ptr, app::Metric__Enum metric, int32_t frame))
    IL2CPP_REGISTER_METHOD(0x03158B60, double, GetLastCompletedMetricValueInMS, (app::MicroProfilerDataProvider * this_ptr, app::Metric__Enum metric))
    IL2CPP_REGISTER_METHOD(0x03158CE0, void, AddPreEndFrameHandler, (app::MicroProfilerDataProvider * this_ptr, app::Action * action))
    IL2CPP_REGISTER_METHOD(0x03158DD0, void, AddPostBeginFrameHandler, (app::MicroProfilerDataProvider * this_ptr, app::Action * action))
    IL2CPP_REGISTER_METHOD(0x03158EC0, void, RemovePreEndFrameHandler, (app::MicroProfilerDataProvider * this_ptr, app::Action * action))
    IL2CPP_REGISTER_METHOD(0x03158F60, void, RemovePostBeginFrameHandler, (app::MicroProfilerDataProvider * this_ptr, app::Action * action))
    IL2CPP_REGISTER_METHOD(0x03159000, double, GetAverageMetricTimeInMSInFrameRange, (app::MicroProfilerDataProvider * this_ptr, app::Metric__Enum metric, int32_t start_frame, int32_t end_frame))
    IL2CPP_REGISTER_METHOD(0x031590C0, double, GetPeakMetricTimeInMSInFrameRange, (app::MicroProfilerDataProvider * this_ptr, app::Metric__Enum metric, int32_t start_frame, int32_t end_frame))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::MicroProfilerDataProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, cctor, ())
}
