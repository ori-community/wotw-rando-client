#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/IncrementInstruction_IncrementInt16.h>
#include <Modloader/app/structs/InterpretedFrame.h>

namespace app::classes::System::Linq::Expressions::Interpreter::IncrementInstruction_IncrementInt16 {
    IL2CPP_REGISTER_METHOD(0x01CD5380, int32_t, Run, (app::IncrementInstruction_IncrementInt16 * this_ptr, app::InterpretedFrame* frame))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::IncrementInstruction_IncrementInt16 * this_ptr))
} // namespace app::classes::System::Linq::Expressions::Interpreter::IncrementInstruction_IncrementInt16
