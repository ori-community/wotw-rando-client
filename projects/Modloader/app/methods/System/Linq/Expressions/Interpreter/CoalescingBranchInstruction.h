#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Linq::Expressions::Interpreter::CoalescingBranchInstruction {
    IL2CPP_REGISTER_METHOD(0x022D9E60, app::Instruction__Array*, get_Cache, (app::CoalescingBranchInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x022D9F20, app::String*, get_InstructionName, (app::CoalescingBranchInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_ConsumedStack, (app::CoalescingBranchInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_ProducedStack, (app::CoalescingBranchInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x022D9FA0, int32_t, Run, (app::CoalescingBranchInstruction * this_ptr, app::InterpretedFrame* frame))
    IL2CPP_REGISTER_METHOD(0x01834240, void, ctor, (app::CoalescingBranchInstruction * this_ptr))
} // namespace app::classes::System::Linq::Expressions::Interpreter::CoalescingBranchInstruction
