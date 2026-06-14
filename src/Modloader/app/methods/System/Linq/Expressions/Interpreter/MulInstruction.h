#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Instruction.h>
#include <Modloader/app/structs/MulInstruction.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::System::Linq::Expressions::Interpreter::MulInstruction {
    IL2CPP_REGISTER_METHOD(0x0043D9E0, int32_t, get_ConsumedStack, app::MulInstruction* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_ProducedStack, app::MulInstruction* this_ptr)
    IL2CPP_REGISTER_METHOD(0x023FD7A0, app::String*, get_InstructionName, app::MulInstruction* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::MulInstruction* this_ptr)
    IL2CPP_REGISTER_METHOD(0x023FD820, app::Instruction*, Create, app::Type* type)
} // namespace app::classes::System::Linq::Expressions::Interpreter::MulInstruction
