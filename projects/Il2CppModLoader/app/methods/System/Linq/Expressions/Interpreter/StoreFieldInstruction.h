#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Linq::Expressions::Interpreter::StoreFieldInstruction {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::StoreFieldInstruction * this_ptr, app::FieldInfo_1 * field))
    IL2CPP_REGISTER_METHOD(0x024112B0, app::String *, get_InstructionName, (app::StoreFieldInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0043D9E0, int32_t, get_ConsumedStack, (app::StoreFieldInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02411330, int32_t, Run, (app::StoreFieldInstruction * this_ptr, app::InterpretedFrame * frame))
}
