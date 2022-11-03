#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Linq::Expressions::Interpreter::GreaterThanOrEqualInstruction {
    IL2CPP_REGISTER_METHOD(0x0043D9E0, int32_t, get_ConsumedStack, (app::GreaterThanOrEqualInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_ProducedStack, (app::GreaterThanOrEqualInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x022E93A0, app::String*, get_InstructionName, (app::GreaterThanOrEqualInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::GreaterThanOrEqualInstruction * this_ptr, app::Object* null_value))
    IL2CPP_REGISTER_METHOD(0x022E9420, app::Instruction*, Create, (app::Type * type, bool lifted_to_null))
    IL2CPP_REGISTER_METHODINFO(0x0471E460, GreaterThanOrEqualInstruction_Create__MethodInfo)
} // namespace app::classes::System::Linq::Expressions::Interpreter::GreaterThanOrEqualInstruction
