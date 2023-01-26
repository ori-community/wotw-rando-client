#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MicroProfilerInspector_c.h>
#include <Modloader/app/structs/Metric__Enum.h>
#include <Modloader/app/structs/MicroProfilerInspector_MetricData.h>

namespace app::classes::MicroProfilerInspector___c {
    IL2CPP_REGISTER_METHOD(0x01433D70, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::MicroProfilerInspector_c * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01433EB0, app::Metric__Enum, _OnGUI_b__64_0, (app::MicroProfilerInspector_c * this_ptr, app::MicroProfilerInspector_MetricData x))
    IL2CPP_REGISTER_METHOD(0x01433EC0, double, _OnGUI_b__64_1, (app::MicroProfilerInspector_c * this_ptr, app::MicroProfilerInspector_MetricData x))
    IL2CPP_REGISTER_METHOD(0x01433ED0, double, _OnGUI_b__64_2, (app::MicroProfilerInspector_c * this_ptr, app::MicroProfilerInspector_MetricData x))
    IL2CPP_REGISTER_METHOD(0x01433EE0, double, _OnGUI_b__64_3, (app::MicroProfilerInspector_c * this_ptr, app::MicroProfilerInspector_MetricData x))
    IL2CPP_REGISTER_METHOD(0x01433EF0, uint32_t, _OnGUI_b__64_4, (app::MicroProfilerInspector_c * this_ptr, app::MicroProfilerInspector_MetricData x))
} // namespace app::classes::MicroProfilerInspector___c
