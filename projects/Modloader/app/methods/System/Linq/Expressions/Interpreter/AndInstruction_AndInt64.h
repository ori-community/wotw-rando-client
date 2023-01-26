#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AndInstruction_AndInt64.h>
#include <Modloader/app/structs/InterpretedFrame.h>

namespace app::classes::System::Linq::Expressions::Interpreter::AndInstruction_AndInt64 {
    IL2CPP_REGISTER_METHOD(0x022D4BF0, int32_t, Run, (app::AndInstruction_AndInt64 * this_ptr, app::InterpretedFrame* frame))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::AndInstruction_AndInt64 * this_ptr))
} // namespace app::classes::System::Linq::Expressions::Interpreter::AndInstruction_AndInt64
