#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DebuggerBrowsableAttribute.h>
#include <Modloader/app/structs/DebuggerBrowsableState__Enum.h>

namespace app::classes::System::Diagnostics::DebuggerBrowsableAttribute {
    IL2CPP_REGISTER_METHOD(0x01741070, void, ctor, app::DebuggerBrowsableAttribute* this_ptr, app::DebuggerBrowsableState__Enum state)
}
