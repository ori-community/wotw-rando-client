#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Linq::Expressions::Interpreter::AssignLocalBoxedInstruction {
    IL2CPP_REGISTER_METHOD(0x002FC6E0, void, ctor, (app::AssignLocalBoxedInstruction * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_ConsumedStack, (app::AssignLocalBoxedInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_ProducedStack, (app::AssignLocalBoxedInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x022D5A10, app::String*, get_InstructionName, (app::AssignLocalBoxedInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x022D5A90, int32_t, Run, (app::AssignLocalBoxedInstruction * this_ptr, app::InterpretedFrame* frame))
} // namespace app::classes::System::Linq::Expressions::Interpreter::AssignLocalBoxedInstruction
