#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Linq::Expressions::Interpreter::NumericConvertInstruction {
    IL2CPP_REGISTER_METHOD(0x02408810, void, ctor, (app::NumericConvertInstruction * this_ptr, app::TypeCode__Enum from, app::TypeCode__Enum to, bool is_lifted_to_null))
    IL2CPP_REGISTER_METHOD(0x02408820, int32_t, Run, (app::NumericConvertInstruction * this_ptr, app::InterpretedFrame * frame))
    IL2CPP_REGISTER_METHOD(0x02408A00, app::String *, get_InstructionName, (app::NumericConvertInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_ConsumedStack, (app::NumericConvertInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_ProducedStack, (app::NumericConvertInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02408A80, app::String *, ToString, (app::NumericConvertInstruction * this_ptr))
}
