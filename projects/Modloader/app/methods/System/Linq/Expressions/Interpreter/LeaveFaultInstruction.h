#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/InterpretedFrame.h>
#include <Modloader/app/structs/LeaveFaultInstruction.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Linq::Expressions::Interpreter::LeaveFaultInstruction {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::LeaveFaultInstruction* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0043D9E0, int32_t, get_ConsumedStack, app::LeaveFaultInstruction* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_ConsumedContinuations, app::LeaveFaultInstruction* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01CE4DD0, app::String*, get_InstructionName, app::LeaveFaultInstruction* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01CE4E50, int32_t, Run, app::LeaveFaultInstruction* this_ptr, app::InterpretedFrame* frame)
    IL2CPP_REGISTER_METHOD(0x01CE4E80, void, cctor, )
} // namespace app::classes::System::Linq::Expressions::Interpreter::LeaveFaultInstruction
