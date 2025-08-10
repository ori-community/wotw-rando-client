#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Instruction.h>
#include <Modloader/app/structs/NegateInstruction.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::System::Linq::Expressions::Interpreter::NegateInstruction {
    IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_ConsumedStack, app::NegateInstruction* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_ProducedStack, app::NegateInstruction* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02400B80, app::String*, get_InstructionName, app::NegateInstruction* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::NegateInstruction* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02400C00, app::Instruction*, Create, app::Type* type)
} // namespace app::classes::System::Linq::Expressions::Interpreter::NegateInstruction
