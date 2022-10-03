#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Linq::Expressions::Interpreter::LeaveExceptionHandlerInstruction {
    IL2CPP_REGISTER_METHOD(0x01CE4920, void, ctor, (app::LeaveExceptionHandlerInstruction * this_ptr, int32_t label_index, bool has_value))
    IL2CPP_REGISTER_METHOD(0x01CE4930, app::String*, get_InstructionName, (app::LeaveExceptionHandlerInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01CE49B0, int32_t, get_ConsumedStack, (app::LeaveExceptionHandlerInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01CE49B0, int32_t, get_ProducedStack, (app::LeaveExceptionHandlerInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01CE49C0, app::LeaveExceptionHandlerInstruction*, Create, (int32_t label_index, bool has_value))
    IL2CPP_REGISTER_METHOD(0x01CE4CD0, int32_t, Run, (app::LeaveExceptionHandlerInstruction * this_ptr, app::InterpretedFrame* frame))
    IL2CPP_REGISTER_METHOD(0x01CE4D40, void, cctor, ())
} // namespace app::classes::System::Linq::Expressions::Interpreter::LeaveExceptionHandlerInstruction
