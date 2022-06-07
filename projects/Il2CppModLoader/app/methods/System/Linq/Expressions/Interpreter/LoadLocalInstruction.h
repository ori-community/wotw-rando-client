#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Linq::Expressions::Interpreter::LoadLocalInstruction {
    IL2CPP_REGISTER_METHOD(0x002FC6E0, void, ctor, (app::LoadLocalInstruction * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_ProducedStack, (app::LoadLocalInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x023F9F00, app::String *, get_InstructionName, (app::LoadLocalInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x023F9F80, int32_t, Run, (app::LoadLocalInstruction * this_ptr, app::InterpretedFrame * frame))
    IL2CPP_REGISTER_METHOD(0x023FA050, app::Instruction *, BoxIfIndexMatches, (app::LoadLocalInstruction * this_ptr, int32_t index))
}
