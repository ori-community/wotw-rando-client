#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Linq::Expressions::Interpreter::RightShiftInstruction {
    IL2CPP_REGISTER_METHOD(0x0043D9E0, int32_t, get_ConsumedStack, (app::RightShiftInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_ProducedStack, (app::RightShiftInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0240EC80, app::String*, get_InstructionName, (app::RightShiftInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::RightShiftInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0240ED00, app::Instruction*, Create, (app::Type * type))
    IL2CPP_REGISTER_METHODINFO(0x0477B6B0, RightShiftInstruction_Create__MethodInfo)
} // namespace app::classes::System::Linq::Expressions::Interpreter::RightShiftInstruction
