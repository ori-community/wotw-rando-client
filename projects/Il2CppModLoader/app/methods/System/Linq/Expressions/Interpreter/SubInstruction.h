#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Linq::Expressions::Interpreter::SubInstruction {
    IL2CPP_REGISTER_METHOD(0x0043D9E0, int32_t, get_ConsumedStack, (app::SubInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_ProducedStack, (app::SubInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02411B50, app::String*, get_InstructionName, (app::SubInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::SubInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02411BD0, app::Instruction*, Create, (app::Type * type))
    IL2CPP_REGISTER_METHODINFO(0x04792B40, SubInstruction_Create__MethodInfo)
} // namespace app::classes::System::Linq::Expressions::Interpreter::SubInstruction
