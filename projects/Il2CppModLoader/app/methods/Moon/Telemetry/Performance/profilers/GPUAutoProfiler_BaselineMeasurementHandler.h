#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Moon::Telemetry::Performance::profilers::GPUAutoProfiler_BaselineMeasurementHandler {
    IL2CPP_REGISTER_METHOD(0x00E43A40, void, EnterState, (app::GPUAutoProfiler_BaselineMeasurementHandler * this_ptr, app::GPUAutoProfilerReport* report))
    IL2CPP_REGISTER_METHOD(0x00E43DC0, void, ExitState, (app::GPUAutoProfiler_BaselineMeasurementHandler * this_ptr, app::GPUAutoProfilerReport* report))
    IL2CPP_REGISTER_METHOD(0x00E44210, void, UpdateState, (app::GPUAutoProfiler_BaselineMeasurementHandler * this_ptr, app::GPUAutoProfilerReport* report))
    IL2CPP_REGISTER_METHOD(0x00E44480, void, SetupState, (app::GPUAutoProfiler_BaselineMeasurementHandler * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E44590, void, AddToReport, (app::GPUAutoProfiler_BaselineMeasurementHandler * this_ptr, app::GPUAutoProfilerReport* report, app::Dictionary_2_Moon_Profile_Metric_System_Single__1* data))
    IL2CPP_REGISTER_METHOD(0x00E446F0, bool, get_CanExit, (app::GPUAutoProfiler_BaselineMeasurementHandler * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E44790, app::String*, get_DebugString, (app::GPUAutoProfiler_BaselineMeasurementHandler * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E44870, void, ctor, (app::GPUAutoProfiler_BaselineMeasurementHandler * this_ptr))
} // namespace app::classes::Moon::Telemetry::Performance::profilers::GPUAutoProfiler_BaselineMeasurementHandler
