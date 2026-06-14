#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/InterpretedFrame.h>
#include <Modloader/app/structs/PopInstruction.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Linq::Expressions::Interpreter::PopInstruction {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::PopInstruction* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_ConsumedStack, app::PopInstruction* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0240CF20, app::String*, get_InstructionName, app::PopInstruction* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0240CFA0, int32_t, Run, app::PopInstruction* this_ptr, app::InterpretedFrame* frame)
    IL2CPP_REGISTER_METHOD(0x0240CFF0, void, cctor, )
} // namespace app::classes::System::Linq::Expressions::Interpreter::PopInstruction
