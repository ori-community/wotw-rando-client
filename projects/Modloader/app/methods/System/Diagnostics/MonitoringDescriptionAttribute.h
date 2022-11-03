#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Diagnostics::MonitoringDescriptionAttribute {
    IL2CPP_REGISTER_METHOD(0x01FFE790, void, ctor, (app::MonitoringDescriptionAttribute * this_ptr, app::String* description))
    IL2CPP_REGISTER_METHOD(0x002FA280, app::String*, get_Description, (app::MonitoringDescriptionAttribute * this_ptr))
} // namespace app::classes::System::Diagnostics::MonitoringDescriptionAttribute
