#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Linq::Expressions::Interpreter::SubOvfInstruction {
    IL2CPP_REGISTER_METHOD(0x0043D9E0, int32_t, get_ConsumedStack, (app::SubOvfInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_ProducedStack, (app::SubOvfInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024132D0, app::String *, get_InstructionName, (app::SubOvfInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::SubOvfInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02413350, app::Instruction *, Create, (app::Type * type))
}
