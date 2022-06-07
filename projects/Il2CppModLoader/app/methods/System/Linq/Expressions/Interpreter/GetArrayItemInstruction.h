#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Linq::Expressions::Interpreter::GetArrayItemInstruction {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::GetArrayItemInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0043D9E0, int32_t, get_ConsumedStack, (app::GetArrayItemInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_ProducedStack, (app::GetArrayItemInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x022E6080, app::String *, get_InstructionName, (app::GetArrayItemInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x022E6100, int32_t, Run, (app::GetArrayItemInstruction * this_ptr, app::InterpretedFrame * frame))
    IL2CPP_REGISTER_METHOD(0x022E6290, void, cctor, ())
}
