#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/AddInstruction_AddInt64.h>
#include <Modloader/app/structs/InterpretedFrame.h>

namespace app::classes::System::Linq::Expressions::Interpreter::AddInstruction_AddInt64 {
    IL2CPP_REGISTER_METHOD(0x022D1E70, int32_t, Run, (app::AddInstruction_AddInt64 * this_ptr, app::InterpretedFrame* frame))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::AddInstruction_AddInt64 * this_ptr))
} // namespace app::classes::System::Linq::Expressions::Interpreter::AddInstruction_AddInt64
