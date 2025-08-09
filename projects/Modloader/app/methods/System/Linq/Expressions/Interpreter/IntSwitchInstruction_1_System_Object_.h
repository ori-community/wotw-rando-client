#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_System_Object_System_Int32_.h>
#include <Modloader/app/structs/IntSwitchInstruction_1_System_Object_.h>
#include <Modloader/app/structs/InterpretedFrame.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Linq::Expressions::Interpreter::IntSwitchInstruction_1_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x02546120, app::String*, get_InstructionName, app::IntSwitchInstruction_1_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_ConsumedStack, app::IntSwitchInstruction_1_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x019D6B90, void, ctor, app::IntSwitchInstruction_1_System_Object_* this_ptr, app::Dictionary_2_System_Object_System_Int32_* cases)
    IL2CPP_REGISTER_METHOD(0x025461A0, int32_t, Run, app::IntSwitchInstruction_1_System_Object_* this_ptr, app::InterpretedFrame* frame)
} // namespace app::classes::System::Linq::Expressions::Interpreter::IntSwitchInstruction_1_System_Object_
