#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DebuggerHiddenAttribute.h>

namespace app::classes::System::Diagnostics::DebuggerHiddenAttribute {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::DebuggerHiddenAttribute * this_ptr))
}
