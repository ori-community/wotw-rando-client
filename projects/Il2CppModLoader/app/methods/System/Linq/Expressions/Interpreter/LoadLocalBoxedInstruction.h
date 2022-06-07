#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Linq::Expressions::Interpreter::LoadLocalBoxedInstruction {
    IL2CPP_REGISTER_METHOD(0x002FC6E0, void, ctor, (app::LoadLocalBoxedInstruction * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_ProducedStack, (app::LoadLocalBoxedInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x023F99C0, app::String *, get_InstructionName, (app::LoadLocalBoxedInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x023F9A40, int32_t, Run, (app::LoadLocalBoxedInstruction * this_ptr, app::InterpretedFrame * frame))
}
