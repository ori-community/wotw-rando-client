#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/String.h>

namespace app::classes::System::Diagnostics::Debugger {
    IL2CPP_REGISTER_METHOD(0x01740F20, bool, get_IsAttached, ())
    IL2CPP_REGISTER_METHOD(0x01740FC0, bool, IsAttached_internal, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Break, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Log, (int32_t level, app::String* category, app::String* message))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, NotifyOfCrossThreadDependency, ())
    IL2CPP_REGISTER_METHOD(0x01740FE0, void, cctor, ())
} // namespace app::classes::System::Diagnostics::Debugger
