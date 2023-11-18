#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Metric__Enum.h>
#include <Modloader/app/structs/MicroProfilerInspector_MetricData__Boxed.h>

namespace app::classes::MicroProfilerInspector_MetricData {
    IL2CPP_REGISTER_METHOD(0x00107C00, app::String*, get_MetricHeaderName, (app::MicroProfilerInspector_MetricData__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0010FD20, void, set_MetricHeaderName, (app::MicroProfilerInspector_MetricData__Boxed * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x0010A860, app::Metric__Enum, get_Metric, (app::MicroProfilerInspector_MetricData__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00127510, void, set_Metric, (app::MicroProfilerInspector_MetricData__Boxed * this_ptr, app::Metric__Enum value))
    IL2CPP_REGISTER_METHOD(0x00127520, double, get_Value, (app::MicroProfilerInspector_MetricData__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00127530, void, set_Value, (app::MicroProfilerInspector_MetricData__Boxed * this_ptr, double value))
    IL2CPP_REGISTER_METHOD(0x00114140, uint32_t, get_Invokations, (app::MicroProfilerInspector_MetricData__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0010FB70, void, set_Invokations, (app::MicroProfilerInspector_MetricData__Boxed * this_ptr, uint32_t value))
    IL2CPP_REGISTER_METHOD(0x00115930, int32_t, get_ColorIndex, (app::MicroProfilerInspector_MetricData__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0010FB80, void, set_ColorIndex, (app::MicroProfilerInspector_MetricData__Boxed * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x00127540, float, get_HideThreshold, (app::MicroProfilerInspector_MetricData__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00114F70, void, set_HideThreshold, (app::MicroProfilerInspector_MetricData__Boxed * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x0010F620, float, get_DangerThreshold, (app::MicroProfilerInspector_MetricData__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00115A70, void, set_DangerThreshold, (app::MicroProfilerInspector_MetricData__Boxed * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x0010DC90, double, get_MarkerPeak, (app::MicroProfilerInspector_MetricData__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00127550, void, set_MarkerPeak, (app::MicroProfilerInspector_MetricData__Boxed * this_ptr, double value))
    IL2CPP_REGISTER_METHOD(0x0010DCA0, double, get_MarkerAvg, (app::MicroProfilerInspector_MetricData__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00127560, void, set_MarkerAvg, (app::MicroProfilerInspector_MetricData__Boxed * this_ptr, double value))
    IL2CPP_REGISTER_METHOD(0x001162C0, int32_t, get_Column, (app::MicroProfilerInspector_MetricData__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001162D0, void, set_Column, (app::MicroProfilerInspector_MetricData__Boxed * this_ptr, int32_t value))
} // namespace app::classes::MicroProfilerInspector_MetricData
