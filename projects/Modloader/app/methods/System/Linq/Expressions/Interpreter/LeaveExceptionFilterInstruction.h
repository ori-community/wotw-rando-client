#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Linq::Expressions::Interpreter::LeaveExceptionFilterInstruction {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::LeaveExceptionFilterInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01CE4760, app::String*, get_InstructionName, (app::LeaveExceptionFilterInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0043D9E0, int32_t, get_ConsumedStack, (app::LeaveExceptionFilterInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417920, int32_t, Run, (app::LeaveExceptionFilterInstruction * this_ptr, app::InterpretedFrame* frame))
    IL2CPP_REGISTER_METHOD(0x01CE47E0, void, cctor, ())
} // namespace app::classes::System::Linq::Expressions::Interpreter::LeaveExceptionFilterInstruction
