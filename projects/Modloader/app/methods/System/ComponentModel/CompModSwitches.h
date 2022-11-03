#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::ComponentModel::CompModSwitches {
    IL2CPP_REGISTER_METHOD(0x024A86E0, app::BooleanSwitch*, get_CommonDesignerServices, ())
    IL2CPP_REGISTER_METHOD(0x024A8880, app::TraceSwitch*, get_EventLog, ())
} // namespace app::classes::System::ComponentModel::CompModSwitches
