#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Linq::Expressions::Interpreter::IntSwitchInstruction_1_System_Int32_ {
    IL2CPP_REGISTER_METHOD(0x019D6B90, void, ctor, (app::IntSwitchInstruction_1_System_Int32_ * this_ptr, app::Dictionary_2_System_Int32_System_Int32_* cases))
    IL2CPP_REGISTER_METHOD(0x02545F90, app::String*, get_InstructionName, (app::IntSwitchInstruction_1_System_Int32_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_ConsumedStack, (app::IntSwitchInstruction_1_System_Int32_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02546010, int32_t, Run, (app::IntSwitchInstruction_1_System_Int32_ * this_ptr, app::InterpretedFrame* frame))
} // namespace app::classes::System::Linq::Expressions::Interpreter::IntSwitchInstruction_1_System_Int32_
