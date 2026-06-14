#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/InterpretedFrame.h>
#include <Modloader/app/structs/NotEqualInstruction_NotEqualUInt32.h>

namespace app::classes::System::Linq::Expressions::Interpreter::NotEqualInstruction_NotEqualUInt32 {
    IL2CPP_REGISTER_METHOD(0x024059C0, int32_t, Run, app::NotEqualInstruction_NotEqualUInt32* this_ptr, app::InterpretedFrame* frame)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::NotEqualInstruction_NotEqualUInt32* this_ptr)
} // namespace app::classes::System::Linq::Expressions::Interpreter::NotEqualInstruction_NotEqualUInt32
