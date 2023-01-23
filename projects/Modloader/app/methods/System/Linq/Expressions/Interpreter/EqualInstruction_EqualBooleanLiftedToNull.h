#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/EqualInstruction_EqualBooleanLiftedToNull.h>
#include <Modloader/app/structs/InterpretedFrame.h>

namespace app::classes::System::Linq::Expressions::Interpreter::EqualInstruction_EqualBooleanLiftedToNull {
    IL2CPP_REGISTER_METHOD(0x022E1F10, int32_t, Run, (app::EqualInstruction_EqualBooleanLiftedToNull * this_ptr, app::InterpretedFrame* frame))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::EqualInstruction_EqualBooleanLiftedToNull * this_ptr))
} // namespace app::classes::System::Linq::Expressions::Interpreter::EqualInstruction_EqualBooleanLiftedToNull
