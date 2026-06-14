#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AddOvfInstruction.h>
#include <Modloader/app/structs/Instruction.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::System::Linq::Expressions::Interpreter::AddOvfInstruction {
    IL2CPP_REGISTER_METHOD(0x0043D9E0, int32_t, get_ConsumedStack, app::AddOvfInstruction* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_ProducedStack, app::AddOvfInstruction* this_ptr)
    IL2CPP_REGISTER_METHOD(0x022D2780, app::String*, get_InstructionName, app::AddOvfInstruction* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::AddOvfInstruction* this_ptr)
    IL2CPP_REGISTER_METHOD(0x022D2800, app::Instruction*, Create, app::Type* type)
} // namespace app::classes::System::Linq::Expressions::Interpreter::AddOvfInstruction
