#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Linq::Expressions::Interpreter::BranchFalseInstruction {
    IL2CPP_REGISTER_METHOD(0x022D5F90, app::Instruction__Array*, get_Cache, (app::BranchFalseInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x022D6050, app::String*, get_InstructionName, (app::BranchFalseInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_ConsumedStack, (app::BranchFalseInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x022D60D0, int32_t, Run, (app::BranchFalseInstruction * this_ptr, app::InterpretedFrame* frame))
    IL2CPP_REGISTER_METHOD(0x01834240, void, ctor, (app::BranchFalseInstruction * this_ptr))
} // namespace app::classes::System::Linq::Expressions::Interpreter::BranchFalseInstruction
