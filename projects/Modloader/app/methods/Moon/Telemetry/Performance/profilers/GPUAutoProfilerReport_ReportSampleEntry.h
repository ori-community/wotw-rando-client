#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GPUAutoProfilerReport_ReportSampleEntry.h>

namespace app::classes::Moon::Telemetry::Performance::profilers::GPUAutoProfilerReport_ReportSampleEntry {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::GPUAutoProfilerReport_ReportSampleEntry* this_ptr)
}
