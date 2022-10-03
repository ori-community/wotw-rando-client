#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Net::Configuration::PerformanceCountersElement {
    IL2CPP_REGISTER_METHOD(0x02019F20, void, ctor, (app::PerformanceCountersElement * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047209B0, PerformanceCountersElement__ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02019F50, bool, get_Enabled, (app::PerformanceCountersElement * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04746C68, PerformanceCountersElement_get_Enabled__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02019F80, void, set_Enabled, (app::PerformanceCountersElement * this_ptr, bool value))
    IL2CPP_REGISTER_METHODINFO(0x0471EBD0, PerformanceCountersElement_set_Enabled__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02019FB0, app::ConfigurationPropertyCollection*, get_Properties, (app::PerformanceCountersElement * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047879E0, PerformanceCountersElement_get_Properties__MethodInfo)
} // namespace app::classes::System::Net::Configuration::PerformanceCountersElement
