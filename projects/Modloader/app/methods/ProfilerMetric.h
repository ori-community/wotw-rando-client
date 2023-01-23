#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ProfilerMetric__Boxed.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Metric__Enum.h>

namespace app::classes::ProfilerMetric {
    IL2CPP_REGISTER_METHOD(0x00002890, void, ctor_1, (app::ProfilerMetric__Boxed * this_ptr, app::String* sample_name))
    IL2CPP_REGISTER_METHOD(0x00002890, void, ctor_2, (app::ProfilerMetric__Boxed * this_ptr, app::Metric__Enum id))
    IL2CPP_REGISTER_METHOD(0x00002890, void, Dispose, (app::ProfilerMetric__Boxed * this_ptr))
} // namespace app::classes::ProfilerMetric
