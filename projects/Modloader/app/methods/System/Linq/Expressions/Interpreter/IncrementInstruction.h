#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Linq::Expressions::Interpreter::IncrementInstruction {
    IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_ConsumedStack, (app::IncrementInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_ProducedStack, (app::IncrementInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01CD4910, app::String*, get_InstructionName, (app::IncrementInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::IncrementInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01CD4990, app::Instruction*, Create, (app::Type * type))
    IL2CPP_REGISTER_METHODINFO(0x047742E8, IncrementInstruction_Create__MethodInfo)
} // namespace app::classes::System::Linq::Expressions::Interpreter::IncrementInstruction
