#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MetricOutput__Boxed.h>
#include <Modloader/app/structs/Metric__Enum.h>
#include <Modloader/app/structs/Presentation__Enum.h>

namespace app::classes::Moon::Profile::MetricOutput {
    IL2CPP_REGISTER_METHOD(0x0024A3B0, void, ctor, (app::MetricOutput__Boxed * this_ptr, app::Metric__Enum metric, app::Presentation__Enum presentation))
}
