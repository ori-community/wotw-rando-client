#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Linq::Expressions::Interpreter::NullableMethodCallInstruction {
    IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_ConsumedStack, (app::NullableMethodCallInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_ProducedStack, (app::NullableMethodCallInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024077B0, app::String*, get_InstructionName, (app::NullableMethodCallInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::NullableMethodCallInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02407830, app::Instruction*, Create, (app::String * method_1, int32_t arg_count, app::MethodInfo_1* mi))
    IL2CPP_REGISTER_METHODINFO(0x04745CD0, NullableMethodCallInstruction_Create__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02408080, app::Instruction*, CreateGetValue, ())
} // namespace app::classes::System::Linq::Expressions::Interpreter::NullableMethodCallInstruction
