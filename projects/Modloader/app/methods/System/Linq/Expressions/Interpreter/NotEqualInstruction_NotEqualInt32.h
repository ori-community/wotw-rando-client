#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/InterpretedFrame.h>
#include <Modloader/app/structs/NotEqualInstruction_NotEqualInt32.h>

namespace app::classes::System::Linq::Expressions::Interpreter::NotEqualInstruction_NotEqualInt32 {
    IL2CPP_REGISTER_METHOD(0x02404A40, int32_t, Run, app::NotEqualInstruction_NotEqualInt32* this_ptr, app::InterpretedFrame* frame)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::NotEqualInstruction_NotEqualInt32* this_ptr)
} // namespace app::classes::System::Linq::Expressions::Interpreter::NotEqualInstruction_NotEqualInt32
