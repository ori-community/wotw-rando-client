#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Moon::Telemetry::Performance::profilers::GPUAutoProfiler_LightSpeedMeasurementHandler {
    IL2CPP_REGISTER_METHOD(0x00E449E0, void, ctor, (app::GPUAutoProfiler_LightSpeedMeasurementHandler * this_ptr, app::List_1_Moon_Telemetry_Performance_profilers_GPUAutoProfiler_Sample_* samples))
    IL2CPP_REGISTER_METHOD(0x00E44F20, void, SetupState, (app::GPUAutoProfiler_LightSpeedMeasurementHandler * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E450E0, void, ExitState, (app::GPUAutoProfiler_LightSpeedMeasurementHandler * this_ptr, app::GPUAutoProfilerReport* report))
    IL2CPP_REGISTER_METHOD(0x00E452C0, void, AddToReport, (app::GPUAutoProfiler_LightSpeedMeasurementHandler * this_ptr, app::GPUAutoProfilerReport* report, app::Dictionary_2_Moon_Profile_Metric_System_Single__1* data))
} // namespace app::classes::Moon::Telemetry::Performance::profilers::GPUAutoProfiler_LightSpeedMeasurementHandler
