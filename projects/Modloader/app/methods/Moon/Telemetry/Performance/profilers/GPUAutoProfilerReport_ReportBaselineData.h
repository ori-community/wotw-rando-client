#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GPUAutoProfilerReport_ReportBaselineData.h>

namespace app::classes::Moon::Telemetry::Performance::profilers::GPUAutoProfilerReport_ReportBaselineData {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::GPUAutoProfilerReport_ReportBaselineData* this_ptr)
}
