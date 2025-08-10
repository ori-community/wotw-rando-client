#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/InterpretedFrame.h>
#include <Modloader/app/structs/NotEqualInstruction_NotEqualCharLiftedToNull.h>

namespace app::classes::System::Linq::Expressions::Interpreter::NotEqualInstruction_NotEqualCharLiftedToNull {
    IL2CPP_REGISTER_METHOD(0x02404280, int32_t, Run, app::NotEqualInstruction_NotEqualCharLiftedToNull* this_ptr, app::InterpretedFrame* frame)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::NotEqualInstruction_NotEqualCharLiftedToNull* this_ptr)
} // namespace app::classes::System::Linq::Expressions::Interpreter::NotEqualInstruction_NotEqualCharLiftedToNull
