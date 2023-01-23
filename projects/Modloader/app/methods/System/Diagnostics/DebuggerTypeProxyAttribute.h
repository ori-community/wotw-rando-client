#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/DebuggerTypeProxyAttribute.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::System::Diagnostics::DebuggerTypeProxyAttribute {
    IL2CPP_REGISTER_METHOD(0x017411E0, void, ctor, (app::DebuggerTypeProxyAttribute * this_ptr, app::Type* type))
    IL2CPP_REGISTER_METHODINFO(0x04796320, DebuggerTypeProxyAttribute__ctor__MethodInfo)
} // namespace app::classes::System::Diagnostics::DebuggerTypeProxyAttribute
