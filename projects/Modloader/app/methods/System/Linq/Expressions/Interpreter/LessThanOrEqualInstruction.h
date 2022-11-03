#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Linq::Expressions::Interpreter::LessThanOrEqualInstruction {
    IL2CPP_REGISTER_METHOD(0x0043D9E0, int32_t, get_ConsumedStack, (app::LessThanOrEqualInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_ProducedStack, (app::LessThanOrEqualInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01CE9200, app::String*, get_InstructionName, (app::LessThanOrEqualInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::LessThanOrEqualInstruction * this_ptr, app::Object* null_value))
    IL2CPP_REGISTER_METHOD(0x01CE9280, app::Instruction*, Create, (app::Type * type, bool lifted_to_null))
    IL2CPP_REGISTER_METHODINFO(0x0472C408, LessThanOrEqualInstruction_Create__MethodInfo)
} // namespace app::classes::System::Linq::Expressions::Interpreter::LessThanOrEqualInstruction
