#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Linq::Expressions::Interpreter::TypeIsInstruction {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::TypeIsInstruction * this_ptr, app::Type* type))
    IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_ConsumedStack, (app::TypeIsInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_ProducedStack, (app::TypeIsInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02415950, app::String*, get_InstructionName, (app::TypeIsInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024159D0, int32_t, Run, (app::TypeIsInstruction * this_ptr, app::InterpretedFrame* frame))
    IL2CPP_REGISTER_METHOD(0x02415A60, app::String*, ToString, (app::TypeIsInstruction * this_ptr))
} // namespace app::classes::System::Linq::Expressions::Interpreter::TypeIsInstruction
