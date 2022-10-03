#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Moon::Rendering::SrpSampler {
    IL2CPP_REGISTER_METHOD(0x001203B0, app::String*, get_name, (app::SrpSampler__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001204A0, float, get_userTime, (app::SrpSampler__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001204D0, float, get_engineTime, (app::SrpSampler__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00120500, void, ctor, (app::SrpSampler__Boxed * this_ptr, app::String* name, app::SrpSampler_Scope__Enum scope, bool force_suffix, bool is_root, int32_t profiler_metric))
    IL2CPP_REGISTER_METHODINFO(0x04787800, SrpSampler__ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00EBE760, app::SrpSampler, Get, (app::String * name, app::SrpSampler_Scope__Enum scope, bool is_root, bool force_suffix, app::Metric__Enum metric))
    IL2CPP_REGISTER_METHOD(0x00EBE950, void, cctor, ())
} // namespace app::classes::Moon::Rendering::SrpSampler
