#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/InterpretedFrame.h>
#include <Modloader/app/structs/NotEqualInstruction_NotEqualUInt64LiftedToNull.h>

namespace app::classes::System::Linq::Expressions::Interpreter::NotEqualInstruction_NotEqualUInt64LiftedToNull {
    IL2CPP_REGISTER_METHOD(0x02405E00, int32_t, Run, app::NotEqualInstruction_NotEqualUInt64LiftedToNull* this_ptr, app::InterpretedFrame* frame)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::NotEqualInstruction_NotEqualUInt64LiftedToNull* this_ptr)
} // namespace app::classes::System::Linq::Expressions::Interpreter::NotEqualInstruction_NotEqualUInt64LiftedToNull
