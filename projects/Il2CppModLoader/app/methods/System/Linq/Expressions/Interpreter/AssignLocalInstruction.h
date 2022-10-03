#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Linq::Expressions::Interpreter::AssignLocalInstruction {
    IL2CPP_REGISTER_METHOD(0x002FC6E0, void, ctor, (app::AssignLocalInstruction * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_ConsumedStack, (app::AssignLocalInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_ProducedStack, (app::AssignLocalInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x022D5C00, app::String*, get_InstructionName, (app::AssignLocalInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x022D5C80, int32_t, Run, (app::AssignLocalInstruction * this_ptr, app::InterpretedFrame* frame))
    IL2CPP_REGISTER_METHOD(0x022D5D40, app::Instruction*, BoxIfIndexMatches, (app::AssignLocalInstruction * this_ptr, int32_t index))
} // namespace app::classes::System::Linq::Expressions::Interpreter::AssignLocalInstruction
