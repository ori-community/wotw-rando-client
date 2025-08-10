#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DecrementInstruction.h>
#include <Modloader/app/structs/Instruction.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::System::Linq::Expressions::Interpreter::DecrementInstruction {
    IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_ConsumedStack, app::DecrementInstruction* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_ProducedStack, app::DecrementInstruction* this_ptr)
    IL2CPP_REGISTER_METHOD(0x022DABD0, app::String*, get_InstructionName, app::DecrementInstruction* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::DecrementInstruction* this_ptr)
    IL2CPP_REGISTER_METHOD(0x022DAC50, app::Instruction*, Create, app::Type* type)
} // namespace app::classes::System::Linq::Expressions::Interpreter::DecrementInstruction
