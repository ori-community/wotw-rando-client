#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::DatadogMetricsEvent {
    IL2CPP_REGISTER_METHOD(0x02E90170, app::String*, get_Url, (app::DatadogMetricsEvent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02E90260, void, ctor, (app::DatadogMetricsEvent * this_ptr, app::String* metric))
    IL2CPP_REGISTER_METHOD(0x02E904B0, app::String*, ToJson, (app::DatadogMetricsEvent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02E90960, app::DatadogMetricsEvent*, AddTag, (app::DatadogMetricsEvent * this_ptr, app::String* key, app::String* value))
    IL2CPP_REGISTER_METHOD(0x02E90AC0, app::DatadogMetricsEvent*, AddPoint, (app::DatadogMetricsEvent * this_ptr, int64_t time, int64_t value))
    IL2CPP_REGISTER_METHOD(0x02E90C00, app::DatadogMetricsEvent*, AddPointNow, (app::DatadogMetricsEvent * this_ptr, int64_t value))
} // namespace app::classes::DatadogMetricsEvent
