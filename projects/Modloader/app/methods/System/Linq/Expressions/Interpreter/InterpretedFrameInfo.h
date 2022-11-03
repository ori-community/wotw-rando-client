#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Linq::Expressions::Interpreter::InterpretedFrameInfo {
    IL2CPP_REGISTER_METHOD(0x00110270, void, ctor, (app::InterpretedFrameInfo__Boxed * this_ptr, app::String* method_name, app::DebugInfo* info))
    IL2CPP_REGISTER_METHOD(0x001C64C0, app::String*, ToString, (app::InterpretedFrameInfo__Boxed * this_ptr))
} // namespace app::classes::System::Linq::Expressions::Interpreter::InterpretedFrameInfo
