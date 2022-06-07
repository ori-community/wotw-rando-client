#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Linq::Expressions::Interpreter::LessThanInstruction {
    IL2CPP_REGISTER_METHOD(0x0043D9E0, int32_t, get_ConsumedStack, (app::LessThanInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_ProducedStack, (app::LessThanInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01CE6830, app::String *, get_InstructionName, (app::LessThanInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::LessThanInstruction * this_ptr, app::Object * null_value))
    IL2CPP_REGISTER_METHOD(0x01CE68B0, app::Instruction *, Create, (app::Type * type, bool lifted_to_null))
    IL2CPP_REGISTER_METHODINFO(0x04787970, LessThanInstruction_Create__MethodInfo)
}
