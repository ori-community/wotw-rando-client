#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/InterpretedFrame.h>
#include <Modloader/app/structs/LoadLocalFromClosureBoxedInstruction.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Linq::Expressions::Interpreter::LoadLocalFromClosureBoxedInstruction {
    IL2CPP_REGISTER_METHOD(0x002FC6E0, void, ctor, app::LoadLocalFromClosureBoxedInstruction* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_ProducedStack, app::LoadLocalFromClosureBoxedInstruction* this_ptr)
    IL2CPP_REGISTER_METHOD(0x023F9BE0, app::String*, get_InstructionName, app::LoadLocalFromClosureBoxedInstruction* this_ptr)
    IL2CPP_REGISTER_METHOD(0x023F9C60, int32_t, Run, app::LoadLocalFromClosureBoxedInstruction* this_ptr, app::InterpretedFrame* frame)
} // namespace app::classes::System::Linq::Expressions::Interpreter::LoadLocalFromClosureBoxedInstruction
