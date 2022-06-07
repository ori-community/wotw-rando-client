#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Linq::Expressions::Interpreter::StringSwitchInstruction {
    IL2CPP_REGISTER_METHOD(0x0058DA40, void, ctor, (app::StringSwitchInstruction * this_ptr, app::Dictionary_2_System_String_System_Int32_ * cases, app::StrongBox_1_System_Int32_ * null_case))
    IL2CPP_REGISTER_METHOD(0x02411930, app::String *, get_InstructionName, (app::StringSwitchInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_ConsumedStack, (app::StringSwitchInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024119B0, int32_t, Run, (app::StringSwitchInstruction * this_ptr, app::InterpretedFrame * frame))
}
