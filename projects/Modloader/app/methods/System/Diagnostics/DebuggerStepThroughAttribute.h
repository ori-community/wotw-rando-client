#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/DebuggerStepThroughAttribute.h>

namespace app::classes::System::Diagnostics::DebuggerStepThroughAttribute {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::DebuggerStepThroughAttribute * this_ptr))
}
