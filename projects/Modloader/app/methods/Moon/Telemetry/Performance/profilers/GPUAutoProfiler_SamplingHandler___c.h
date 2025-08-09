#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GPUAutoProfiler_Sample.h>
#include <Modloader/app/structs/GPUAutoProfiler_SamplingHandler_c.h>

namespace app::classes::Moon::Telemetry::Performance::profilers::GPUAutoProfiler_SamplingHandler___c {
    IL2CPP_REGISTER_METHOD(0x00E46BC0, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::GPUAutoProfiler_SamplingHandler_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E46D00, bool, _get_CanExit_b__7_0, app::GPUAutoProfiler_SamplingHandler_c* this_ptr, app::GPUAutoProfiler_Sample* x)
} // namespace app::classes::Moon::Telemetry::Performance::profilers::GPUAutoProfiler_SamplingHandler___c
