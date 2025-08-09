#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DatadogMetricsEvent_Series.h>

namespace app::classes::DatadogMetricsEvent_Series {
    IL2CPP_REGISTER_METHOD(0x02E90E40, void, ctor, app::DatadogMetricsEvent_Series* this_ptr)
}
