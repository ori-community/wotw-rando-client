#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Linq::Expressions::Interpreter::NotEqualInstruction {
    IL2CPP_REGISTER_METHOD(0x0043D9E0, int32_t, get_ConsumedStack, (app::NotEqualInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_ProducedStack, (app::NotEqualInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02402380, app::String *, get_InstructionName, (app::NotEqualInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::NotEqualInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02402400, app::Instruction *, Create, (app::Type * type, bool lifted_to_null))
}
