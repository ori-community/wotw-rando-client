#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GPUAutoProfiler_ProfilerStateHandler.h>

namespace app::classes::Moon::Telemetry::Performance::profilers::GPUAutoProfiler_ProfilerStateHandler {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::GPUAutoProfiler_ProfilerStateHandler * this_ptr))
}
