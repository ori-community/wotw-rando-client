#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/NegateInstruction_NegateSingle.h>
#include <Modloader/app/structs/InterpretedFrame.h>

namespace app::classes::System::Linq::Expressions::Interpreter::NegateInstruction_NegateSingle {
    IL2CPP_REGISTER_METHOD(0x024016F0, int32_t, Run, (app::NegateInstruction_NegateSingle * this_ptr, app::InterpretedFrame* frame))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::NegateInstruction_NegateSingle * this_ptr))
} // namespace app::classes::System::Linq::Expressions::Interpreter::NegateInstruction_NegateSingle
