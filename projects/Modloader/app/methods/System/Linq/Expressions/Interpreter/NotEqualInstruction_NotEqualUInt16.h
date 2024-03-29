#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/NotEqualInstruction_NotEqualUInt16.h>
#include <Modloader/app/structs/InterpretedFrame.h>

namespace app::classes::System::Linq::Expressions::Interpreter::NotEqualInstruction_NotEqualUInt16 {
    IL2CPP_REGISTER_METHOD(0x024056C0, int32_t, Run, (app::NotEqualInstruction_NotEqualUInt16 * this_ptr, app::InterpretedFrame* frame))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::NotEqualInstruction_NotEqualUInt16 * this_ptr))
} // namespace app::classes::System::Linq::Expressions::Interpreter::NotEqualInstruction_NotEqualUInt16
