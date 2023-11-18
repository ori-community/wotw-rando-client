#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GreaterThanInstruction.h>
#include <Modloader/app/structs/Instruction.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::System::Linq::Expressions::Interpreter::GreaterThanInstruction {
    IL2CPP_REGISTER_METHOD(0x0043D9E0, int32_t, get_ConsumedStack, (app::GreaterThanInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_ProducedStack, (app::GreaterThanInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x022E69D0, app::String*, get_InstructionName, (app::GreaterThanInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::GreaterThanInstruction * this_ptr, app::Object* null_value))
    IL2CPP_REGISTER_METHOD(0x022E6A50, app::Instruction*, Create, (app::Type * type, bool lifted_to_null))
} // namespace app::classes::System::Linq::Expressions::Interpreter::GreaterThanInstruction
