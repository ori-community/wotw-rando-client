#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/DebugInfo.h>
#include <Modloader/app/structs/DebugInfo__Array.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Linq::Expressions::Interpreter::DebugInfo {
    IL2CPP_REGISTER_METHOD(0x022DA540, app::DebugInfo*, GetMatchingDebugInfo, (app::DebugInfo__Array * debug_infos, int32_t index))
    IL2CPP_REGISTER_METHOD(0x022DA720, app::String*, ToString, (app::DebugInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::DebugInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x022DAA50, void, cctor, ())
} // namespace app::classes::System::Linq::Expressions::Interpreter::DebugInfo
