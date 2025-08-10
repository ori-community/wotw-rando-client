#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_Moon_Profile_Metric_System_Single__1.h>
#include <Modloader/app/structs/GPUAutoProfilerReport.h>
#include <Modloader/app/structs/GPUAutoProfiler_FasterThanLightSpeedMeasurementHandler.h>
#include <Modloader/app/structs/List_1_Moon_Telemetry_Performance_profilers_GPUAutoProfiler_Sample_.h>

namespace app::classes::Moon::Telemetry::Performance::profilers::GPUAutoProfiler_FasterThanLightSpeedMeasurementHandler {
    IL2CPP_REGISTER_METHOD(
        0x00E449E0,
        void,
        ctor,
        app::GPUAutoProfiler_FasterThanLightSpeedMeasurementHandler* this_ptr,
        app::List_1_Moon_Telemetry_Performance_profilers_GPUAutoProfiler_Sample_* samples
    )
    IL2CPP_REGISTER_METHOD(0x00E44A10, void, SetupState, app::GPUAutoProfiler_FasterThanLightSpeedMeasurementHandler* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x00E44B00,
        void,
        ExitState,
        app::GPUAutoProfiler_FasterThanLightSpeedMeasurementHandler* this_ptr,
        app::GPUAutoProfilerReport* report
    )
    IL2CPP_REGISTER_METHOD(
        0x00E44CC0,
        void,
        AddToReport,
        app::GPUAutoProfiler_FasterThanLightSpeedMeasurementHandler* this_ptr,
        app::GPUAutoProfilerReport* report,
        app::Dictionary_2_Moon_Profile_Metric_System_Single__1* data
    )
    IL2CPP_REGISTER_METHOD(0x00E44E20, void, cctor, )
} // namespace app::classes::Moon::Telemetry::Performance::profilers::GPUAutoProfiler_FasterThanLightSpeedMeasurementHandler
