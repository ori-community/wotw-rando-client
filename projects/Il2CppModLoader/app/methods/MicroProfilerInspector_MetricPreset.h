#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::MicroProfilerInspector_MetricPreset {
    IL2CPP_REGISTER_METHOD(0x002FA280, app::String *, get_Name, (app::MicroProfilerInspector_MetricPreset * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA490, void, set_Name, (app::MicroProfilerInspector_MetricPreset * this_ptr, app::String * value))
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_MaxMS, (app::MicroProfilerInspector_MetricPreset * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052A000, void, set_MaxMS, (app::MicroProfilerInspector_MetricPreset * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x01433F20, void, ctor, (app::MicroProfilerInspector_MetricPreset * this_ptr))
}
