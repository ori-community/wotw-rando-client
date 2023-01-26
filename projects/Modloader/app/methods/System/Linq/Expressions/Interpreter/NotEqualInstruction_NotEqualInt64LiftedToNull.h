#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/NotEqualInstruction_NotEqualInt64LiftedToNull.h>
#include <Modloader/app/structs/InterpretedFrame.h>

namespace app::classes::System::Linq::Expressions::Interpreter::NotEqualInstruction_NotEqualInt64LiftedToNull {
    IL2CPP_REGISTER_METHOD(0x02404E80, int32_t, Run, (app::NotEqualInstruction_NotEqualInt64LiftedToNull * this_ptr, app::InterpretedFrame* frame))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::NotEqualInstruction_NotEqualInt64LiftedToNull * this_ptr))
} // namespace app::classes::System::Linq::Expressions::Interpreter::NotEqualInstruction_NotEqualInt64LiftedToNull
