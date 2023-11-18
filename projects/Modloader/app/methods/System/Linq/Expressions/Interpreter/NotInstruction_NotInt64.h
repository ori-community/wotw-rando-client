#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/NotInstruction_NotInt64.h>
#include <Modloader/app/structs/InterpretedFrame.h>

namespace app::classes::System::Linq::Expressions::Interpreter::NotInstruction_NotInt64 {
    IL2CPP_REGISTER_METHOD(0x02406EA0, int32_t, Run, (app::NotInstruction_NotInt64 * this_ptr, app::InterpretedFrame* frame))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::NotInstruction_NotInt64 * this_ptr))
} // namespace app::classes::System::Linq::Expressions::Interpreter::NotInstruction_NotInt64
