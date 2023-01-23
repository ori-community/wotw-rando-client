#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/GPUAutoProfilerReportRenderer.h>
#include <Modloader/app/structs/GPUAutoProfilerReport.h>
#include <Modloader/app/structs/Single__Array.h>
#include <Modloader/app/structs/GPUAutoProfilerReport_ReportBaselineData.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Color.h>

namespace app::classes::Moon::Telemetry::Performance::profilers::GPUAutoProfilerReportRenderer {
    IL2CPP_REGISTER_METHOD(0x00E46F40, void, CreateLineMaterial, (app::GPUAutoProfilerReportRenderer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E470E0, bool, get_IsVisible, ())
    IL2CPP_REGISTER_METHOD(0x00E471B0, void, Show, (app::GPUAutoProfilerReport * report))
    IL2CPP_REGISTER_METHOD(0x00E47440, void, Hide, ())
    IL2CPP_REGISTER_METHOD(0x00E47570, float, GetAverage, (app::GPUAutoProfilerReportRenderer * this_ptr, app::Single__Array* samples))
    IL2CPP_REGISTER_METHOD(0x00E475D0, void, Initialize, (app::GPUAutoProfilerReportRenderer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E47820, void, OnEnable, (app::GPUAutoProfilerReportRenderer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E47B40, void, OnDisable, (app::GPUAutoProfilerReportRenderer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E47E50, void, Update, (app::GPUAutoProfilerReportRenderer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E47F30, void, Draw, (app::GPUAutoProfilerReportRenderer * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047551C0, GPUAutoProfilerReportRenderer_Draw__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00E481E0, void, DrawLineBackdrop, (app::GPUAutoProfilerReportRenderer * this_ptr, int32_t y))
    IL2CPP_REGISTER_METHOD(0x00E48380, void, DrawInternal, (app::GPUAutoProfilerReportRenderer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E490F0, void, DrawBaselineReport, (app::GPUAutoProfilerReportRenderer * this_ptr, app::GPUAutoProfilerReport_ReportBaselineData* data, int32_t start_x, int32_t start_y, int32_t metric_start_x, app::String* name))
    IL2CPP_REGISTER_METHOD(0x00E49390, int32_t, DrawString, (app::GPUAutoProfilerReportRenderer * this_ptr, app::Color color, app::Color background_color, app::String* string_value, int32_t x, int32_t y))
    IL2CPP_REGISTER_METHOD(0x00E3EE80, int32_t, FloatWidth, (app::GPUAutoProfilerReportRenderer * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x00E494D0, int32_t, DrawFloat, (app::GPUAutoProfilerReportRenderer * this_ptr, app::Color color, app::Color background_color, float float_value, int32_t x, int32_t y))
    IL2CPP_REGISTER_METHOD(0x00E495F0, void, SuspendGameplay, ())
    IL2CPP_REGISTER_METHOD(0x00E49680, void, ResumeGameplay, ())
    IL2CPP_REGISTER_METHOD(0x00E49710, void, ctor, (app::GPUAutoProfilerReportRenderer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E49800, void, cctor, ())
} // namespace app::classes::Moon::Telemetry::Performance::profilers::GPUAutoProfilerReportRenderer
