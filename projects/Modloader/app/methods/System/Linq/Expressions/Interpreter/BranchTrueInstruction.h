#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Instruction__Array.h>
#include <Modloader/app/structs/BranchTrueInstruction.h>
#include <Modloader/app/structs/InterpretedFrame.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Linq::Expressions::Interpreter::BranchTrueInstruction {
    IL2CPP_REGISTER_METHOD(0x022D6AF0, app::Instruction__Array*, get_Cache, (app::BranchTrueInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x022D6BB0, app::String*, get_InstructionName, (app::BranchTrueInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_ConsumedStack, (app::BranchTrueInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x022D6C30, int32_t, Run, (app::BranchTrueInstruction * this_ptr, app::InterpretedFrame* frame))
    IL2CPP_REGISTER_METHOD(0x01834240, void, ctor, (app::BranchTrueInstruction * this_ptr))
} // namespace app::classes::System::Linq::Expressions::Interpreter::BranchTrueInstruction
