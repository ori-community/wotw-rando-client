#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::MicroProfilerGraph_MetricCache {
    IL2CPP_REGISTER_METHOD(0x0010E170, app::Metric__Enum, get_Metric, (app::MicroProfilerGraph_MetricCache__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0010DB80, void, set_Metric, (app::MicroProfilerGraph_MetricCache__Boxed * this_ptr, app::Metric__Enum value))
    IL2CPP_REGISTER_METHOD(0x0012E2E0, app::Color, get_Color, (app::MicroProfilerGraph_MetricCache__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0012E2F0, void, set_Color, (app::MicroProfilerGraph_MetricCache__Boxed * this_ptr, app::Color value))
}
