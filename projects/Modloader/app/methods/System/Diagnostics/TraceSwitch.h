#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/TraceSwitch.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Diagnostics::TraceSwitch {
    IL2CPP_REGISTER_METHOD(0x020055F0, void, ctor, (app::TraceSwitch * this_ptr, app::String* display_name, app::String* description))
}
