#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/GPUAutoProfiler_Sample_SamplingState__Enum.h>
#include <Modloader/app/structs/GPUAutoProfiler_Sample.h>
#include <Modloader/app/structs/GPUAutoProfilerReport.h>

namespace app::classes::Moon::Telemetry::Performance::profilers::GPUAutoProfiler_Sample {
    IL2CPP_REGISTER_METHOD(0x002FD1D0, app::GPUAutoProfiler_Sample_SamplingState__Enum, get_State, (app::GPUAutoProfiler_Sample * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E45420, void, set_State, (app::GPUAutoProfiler_Sample * this_ptr, app::GPUAutoProfiler_Sample_SamplingState__Enum value))
    IL2CPP_REGISTER_METHOD(0x00E45530, void, ctor, (app::GPUAutoProfiler_Sample * this_ptr, app::GPUAutoProfilerReport* report))
    IL2CPP_REGISTER_METHOD(0x00E45A70, void, StartSampling, (app::GPUAutoProfiler_Sample * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E45C50, void, StartCooldown, (app::GPUAutoProfiler_Sample * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E45D10, void, EndSampling, (app::GPUAutoProfiler_Sample * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E45F60, void, Update, (app::GPUAutoProfiler_Sample * this_ptr))
} // namespace app::classes::Moon::Telemetry::Performance::profilers::GPUAutoProfiler_Sample
