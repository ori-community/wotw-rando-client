#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/NotEqualInstruction_NotEqualSingle.h>
#include <Modloader/app/structs/InterpretedFrame.h>

namespace app::classes::System::Linq::Expressions::Interpreter::NotEqualInstruction_NotEqualSingle {
    IL2CPP_REGISTER_METHOD(0x024053A0, int32_t, Run, (app::NotEqualInstruction_NotEqualSingle * this_ptr, app::InterpretedFrame* frame))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::NotEqualInstruction_NotEqualSingle * this_ptr))
} // namespace app::classes::System::Linq::Expressions::Interpreter::NotEqualInstruction_NotEqualSingle
