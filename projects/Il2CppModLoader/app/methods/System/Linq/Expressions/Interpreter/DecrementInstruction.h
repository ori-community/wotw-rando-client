#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Linq::Expressions::Interpreter::DecrementInstruction {
    IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_ConsumedStack, (app::DecrementInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_ProducedStack, (app::DecrementInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x022DABD0, app::String*, get_InstructionName, (app::DecrementInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::DecrementInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x022DAC50, app::Instruction*, Create, (app::Type * type))
    IL2CPP_REGISTER_METHODINFO(0x0472C5B8, DecrementInstruction_Create__MethodInfo)
} // namespace app::classes::System::Linq::Expressions::Interpreter::DecrementInstruction
