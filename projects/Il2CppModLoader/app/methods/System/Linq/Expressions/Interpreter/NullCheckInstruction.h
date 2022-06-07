#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Linq::Expressions::Interpreter::NullCheckInstruction {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::NullCheckInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_ConsumedStack, (app::NullCheckInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_ProducedStack, (app::NullCheckInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02407510, app::String *, get_InstructionName, (app::NullCheckInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02407590, int32_t, Run, (app::NullCheckInstruction * this_ptr, app::InterpretedFrame * frame))
    IL2CPP_REGISTER_METHODINFO(0x0477A3A0, NullCheckInstruction_Run__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02407670, void, cctor, ())
}
