#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/NegateInstruction_NegateInt32.h>
#include <Modloader/app/structs/InterpretedFrame.h>

namespace app::classes::System::Linq::Expressions::Interpreter::NegateInstruction_NegateInt32 {
    IL2CPP_REGISTER_METHOD(0x02401460, int32_t, Run, (app::NegateInstruction_NegateInt32 * this_ptr, app::InterpretedFrame* frame))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::NegateInstruction_NegateInt32 * this_ptr))
} // namespace app::classes::System::Linq::Expressions::Interpreter::NegateInstruction_NegateInt32
