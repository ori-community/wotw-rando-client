#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/NotEqualInstruction_NotEqualBoolean.h>
#include <Modloader/app/structs/InterpretedFrame.h>

namespace app::classes::System::Linq::Expressions::Interpreter::NotEqualInstruction_NotEqualBoolean {
    IL2CPP_REGISTER_METHOD(0x02403CD0, int32_t, Run, (app::NotEqualInstruction_NotEqualBoolean * this_ptr, app::InterpretedFrame* frame))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::NotEqualInstruction_NotEqualBoolean * this_ptr))
} // namespace app::classes::System::Linq::Expressions::Interpreter::NotEqualInstruction_NotEqualBoolean
