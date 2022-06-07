#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::ProfilerMetric {
    IL2CPP_REGISTER_METHOD(0x00002890, void, ctor_1, (app::ProfilerMetric__Boxed * this_ptr, app::String * sample_name))
    IL2CPP_REGISTER_METHOD(0x00002890, void, ctor_2, (app::ProfilerMetric__Boxed * this_ptr, app::Metric__Enum id))
    IL2CPP_REGISTER_METHOD(0x00002890, void, Dispose, (app::ProfilerMetric__Boxed * this_ptr))
}
