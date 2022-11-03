#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Linq::Expressions::Interpreter::TypeEqualsInstruction {
    IL2CPP_REGISTER_METHOD(0x0043D9E0, int32_t, get_ConsumedStack, (app::TypeEqualsInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_ProducedStack, (app::TypeEqualsInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024156D0, app::String*, get_InstructionName, (app::TypeEqualsInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::TypeEqualsInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02415750, int32_t, Run, (app::TypeEqualsInstruction * this_ptr, app::InterpretedFrame* frame))
    IL2CPP_REGISTER_METHOD(0x02415810, void, cctor, ())
} // namespace app::classes::System::Linq::Expressions::Interpreter::TypeEqualsInstruction
