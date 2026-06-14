#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/InterpretedFrame.h>
#include <Modloader/app/structs/NegateInstruction_NegateDouble.h>

namespace app::classes::System::Linq::Expressions::Interpreter::NegateInstruction_NegateDouble {
    IL2CPP_REGISTER_METHOD(0x024011C0, int32_t, Run, app::NegateInstruction_NegateDouble* this_ptr, app::InterpretedFrame* frame)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::NegateInstruction_NegateDouble* this_ptr)
} // namespace app::classes::System::Linq::Expressions::Interpreter::NegateInstruction_NegateDouble
