#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Moon::Telemetry::Performance::profilers::GPUAutoProfiler_SamplingHandler {
    IL2CPP_REGISTER_METHOD(0x00E464D0, void, ctor, (app::GPUAutoProfiler_SamplingHandler * this_ptr, app::List_1_Moon_Telemetry_Performance_profilers_GPUAutoProfiler_Sample_* samples))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, EnterState, (app::GPUAutoProfiler_SamplingHandler * this_ptr, app::GPUAutoProfilerReport* report))
    IL2CPP_REGISTER_METHOD(0x00E464E0, void, ExitState, (app::GPUAutoProfiler_SamplingHandler * this_ptr, app::GPUAutoProfilerReport* report))
    IL2CPP_REGISTER_METHOD(0x00E46750, void, UpdateState, (app::GPUAutoProfiler_SamplingHandler * this_ptr, app::GPUAutoProfilerReport* report))
    IL2CPP_REGISTER_METHOD(0x00E46830, bool, get_CanExit, (app::GPUAutoProfiler_SamplingHandler * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E46A10, app::String*, get_DebugString, (app::GPUAutoProfiler_SamplingHandler * this_ptr))
} // namespace app::classes::Moon::Telemetry::Performance::profilers::GPUAutoProfiler_SamplingHandler
