#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::MicroProfiler_StatInfo {
    IL2CPP_REGISTER_METHOD(0x0011DC50, app::MicroProfiler_StatType__Enum, get_Type, (app::MicroProfiler_StatInfo__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0024A330, void, SetValue_1, (app::MicroProfiler_StatInfo__Boxed * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x0024A360, void, SetValue_2, (app::MicroProfiler_StatInfo__Boxed * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x0024A370, void, SetValue_3, (app::MicroProfiler_StatInfo__Boxed * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x0010FDD0, float, get_FloatValue, (app::MicroProfiler_StatInfo__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0024A390, int32_t, get_IntValue, (app::MicroProfiler_StatInfo__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0024A3A0, bool, get_BoolValue, (app::MicroProfiler_StatInfo__Boxed * this_ptr))
} // namespace app::classes::MicroProfiler_StatInfo
