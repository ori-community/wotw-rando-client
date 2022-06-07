#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Linq::Expressions::Interpreter::InitializeLocalInstruction_MutableValue {
    IL2CPP_REGISTER_METHOD(0x0091DD30, void, ctor, (app::InitializeLocalInstruction_MutableValue * this_ptr, int32_t index, app::Type * type))
    IL2CPP_REGISTER_METHOD(0x01CD6F30, int32_t, Run, (app::InitializeLocalInstruction_MutableValue * this_ptr, app::InterpretedFrame * frame))
    IL2CPP_REGISTER_METHODINFO(0x047663C8, InitializeLocalInstruction_MutableValue_Run__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01CD7050, app::Instruction *, BoxIfIndexMatches, (app::InitializeLocalInstruction_MutableValue * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x01CD71C0, app::String *, get_InstructionName, (app::InitializeLocalInstruction_MutableValue * this_ptr))
}
