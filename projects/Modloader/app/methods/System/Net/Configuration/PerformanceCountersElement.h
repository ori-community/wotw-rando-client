#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PerformanceCountersElement.h>
#include <Modloader/app/structs/ConfigurationPropertyCollection.h>

namespace app::classes::System::Net::Configuration::PerformanceCountersElement {
    IL2CPP_REGISTER_METHOD(0x02019F20, void, ctor, (app::PerformanceCountersElement * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02019F50, bool, get_Enabled, (app::PerformanceCountersElement * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02019F80, void, set_Enabled, (app::PerformanceCountersElement * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x02019FB0, app::ConfigurationPropertyCollection*, get_Properties, (app::PerformanceCountersElement * this_ptr))
} // namespace app::classes::System::Net::Configuration::PerformanceCountersElement
