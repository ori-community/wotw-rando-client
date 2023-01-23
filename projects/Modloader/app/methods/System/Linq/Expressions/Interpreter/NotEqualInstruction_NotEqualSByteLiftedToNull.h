#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/NotEqualInstruction_NotEqualSByteLiftedToNull.h>
#include <Modloader/app/structs/InterpretedFrame.h>

namespace app::classes::System::Linq::Expressions::Interpreter::NotEqualInstruction_NotEqualSByteLiftedToNull {
    IL2CPP_REGISTER_METHOD(0x02405210, int32_t, Run, (app::NotEqualInstruction_NotEqualSByteLiftedToNull * this_ptr, app::InterpretedFrame* frame))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::NotEqualInstruction_NotEqualSByteLiftedToNull * this_ptr))
} // namespace app::classes::System::Linq::Expressions::Interpreter::NotEqualInstruction_NotEqualSByteLiftedToNull
