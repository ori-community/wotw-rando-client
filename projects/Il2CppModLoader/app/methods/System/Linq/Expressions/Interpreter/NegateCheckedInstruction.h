#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Linq::Expressions::Interpreter::NegateCheckedInstruction {
    IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_ConsumedStack, (app::NegateCheckedInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_ProducedStack, (app::NegateCheckedInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024002A0, app::String *, get_InstructionName, (app::NegateCheckedInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::NegateCheckedInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02400320, app::Instruction *, Create, (app::Type * type))
}
