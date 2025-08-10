#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IncrementInstruction_IncrementInt32.h>
#include <Modloader/app/structs/InterpretedFrame.h>

namespace app::classes::System::Linq::Expressions::Interpreter::IncrementInstruction_IncrementInt32 {
    IL2CPP_REGISTER_METHOD(0x01CD54C0, int32_t, Run, app::IncrementInstruction_IncrementInt32* this_ptr, app::InterpretedFrame* frame)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::IncrementInstruction_IncrementInt32* this_ptr)
} // namespace app::classes::System::Linq::Expressions::Interpreter::IncrementInstruction_IncrementInt32
