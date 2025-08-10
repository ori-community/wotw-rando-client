#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/InterpretedFrame.h>
#include <Modloader/app/structs/NotEqualInstruction_NotEqualSingleLiftedToNull.h>

namespace app::classes::System::Linq::Expressions::Interpreter::NotEqualInstruction_NotEqualSingleLiftedToNull {
    IL2CPP_REGISTER_METHOD(0x02405500, int32_t, Run, app::NotEqualInstruction_NotEqualSingleLiftedToNull* this_ptr, app::InterpretedFrame* frame)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::NotEqualInstruction_NotEqualSingleLiftedToNull* this_ptr)
} // namespace app::classes::System::Linq::Expressions::Interpreter::NotEqualInstruction_NotEqualSingleLiftedToNull
