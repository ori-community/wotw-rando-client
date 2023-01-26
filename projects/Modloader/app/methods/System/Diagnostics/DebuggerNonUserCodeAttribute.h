#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DebuggerNonUserCodeAttribute.h>

namespace app::classes::System::Diagnostics::DebuggerNonUserCodeAttribute {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::DebuggerNonUserCodeAttribute * this_ptr))
}
