#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Linq::Expressions::Interpreter::InitializeLocalInstruction_Reference {
    IL2CPP_REGISTER_METHOD(0x002FC6E0, void, ctor, (app::InitializeLocalInstruction_Reference * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x01CD7700, int32_t, Run, (app::InitializeLocalInstruction_Reference * this_ptr, app::InterpretedFrame * frame))
    IL2CPP_REGISTER_METHOD(0x01CD7750, app::Instruction *, BoxIfIndexMatches, (app::InitializeLocalInstruction_Reference * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x01CD7920, app::String *, get_InstructionName, (app::InitializeLocalInstruction_Reference * this_ptr))
}
