#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/InterpretedFrame.h>
#include <Modloader/app/structs/RightShiftInstruction_RightShiftInt32.h>

namespace app::classes::System::Linq::Expressions::Interpreter::RightShiftInstruction_RightShiftInt32 {
    IL2CPP_REGISTER_METHOD(0x0240F8D0, int32_t, Run, app::RightShiftInstruction_RightShiftInt32* this_ptr, app::InterpretedFrame* frame)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::RightShiftInstruction_RightShiftInt32* this_ptr)
} // namespace app::classes::System::Linq::Expressions::Interpreter::RightShiftInstruction_RightShiftInt32
