#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/EnterExceptionHandlerInstruction.h>
#include <Modloader/app/structs/InterpretedFrame.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Linq::Expressions::Interpreter::EnterExceptionHandlerInstruction {
    IL2CPP_REGISTER_METHOD(0x0052C650, void, ctor, app::EnterExceptionHandlerInstruction* this_ptr, bool has_value)
    IL2CPP_REGISTER_METHOD(0x022DEA70, app::String*, get_InstructionName, app::EnterExceptionHandlerInstruction* this_ptr)
    IL2CPP_REGISTER_METHOD(0x022DEAF0, int32_t, get_ConsumedStack, app::EnterExceptionHandlerInstruction* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_ProducedStack, app::EnterExceptionHandlerInstruction* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417920, int32_t, Run, app::EnterExceptionHandlerInstruction* this_ptr, app::InterpretedFrame* frame)
    IL2CPP_REGISTER_METHOD(0x022DEB00, void, cctor, )
} // namespace app::classes::System::Linq::Expressions::Interpreter::EnterExceptionHandlerInstruction
