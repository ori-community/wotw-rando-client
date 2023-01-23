#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/EqualInstruction.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Instruction.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::System::Linq::Expressions::Interpreter::EqualInstruction {
    IL2CPP_REGISTER_METHOD(0x0043D9E0, int32_t, get_ConsumedStack, (app::EqualInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_ProducedStack, (app::EqualInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x022E0380, app::String*, get_InstructionName, (app::EqualInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::EqualInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x022E0400, app::Instruction*, Create, (app::Type * type, bool lifted_to_null))
} // namespace app::classes::System::Linq::Expressions::Interpreter::EqualInstruction
