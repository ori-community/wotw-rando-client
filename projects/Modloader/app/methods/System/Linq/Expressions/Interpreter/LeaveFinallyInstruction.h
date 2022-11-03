#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Linq::Expressions::Interpreter::LeaveFinallyInstruction {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::LeaveFinallyInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0043D9E0, int32_t, get_ConsumedStack, (app::LeaveFinallyInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01CE4FC0, app::String*, get_InstructionName, (app::LeaveFinallyInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01CE5040, int32_t, Run, (app::LeaveFinallyInstruction * this_ptr, app::InterpretedFrame* frame))
    IL2CPP_REGISTER_METHOD(0x01CE5080, void, cctor, ())
} // namespace app::classes::System::Linq::Expressions::Interpreter::LeaveFinallyInstruction
