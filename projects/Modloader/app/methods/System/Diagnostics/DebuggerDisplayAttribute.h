#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/DebuggerDisplayAttribute.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Diagnostics::DebuggerDisplayAttribute {
    IL2CPP_REGISTER_METHOD(0x01741130, void, ctor, (app::DebuggerDisplayAttribute * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x002FA490, void, set_Name, (app::DebuggerDisplayAttribute * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x002FB960, void, set_Type, (app::DebuggerDisplayAttribute * this_ptr, app::String* value))
} // namespace app::classes::System::Diagnostics::DebuggerDisplayAttribute
