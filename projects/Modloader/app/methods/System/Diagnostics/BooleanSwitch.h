#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/BooleanSwitch.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Diagnostics::BooleanSwitch {
    IL2CPP_REGISTER_METHOD(0x01FFE670, void, ctor, (app::BooleanSwitch * this_ptr, app::String* display_name, app::String* description))
}
