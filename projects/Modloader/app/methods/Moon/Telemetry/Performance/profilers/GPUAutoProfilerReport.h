#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GPUAutoProfilerReport.h>

namespace app::classes::Moon::Telemetry::Performance::profilers::GPUAutoProfilerReport {
    IL2CPP_REGISTER_METHOD(0x00E46D20, void, ctor, (app::GPUAutoProfilerReport * this_ptr))
}
