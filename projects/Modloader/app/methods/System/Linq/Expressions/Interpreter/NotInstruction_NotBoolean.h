#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/NotInstruction_NotBoolean.h>
#include <Modloader/app/structs/InterpretedFrame.h>

namespace app::classes::System::Linq::Expressions::Interpreter::NotInstruction_NotBoolean {
    IL2CPP_REGISTER_METHOD(0x024069A0, int32_t, Run, (app::NotInstruction_NotBoolean * this_ptr, app::InterpretedFrame* frame))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::NotInstruction_NotBoolean * this_ptr))
} // namespace app::classes::System::Linq::Expressions::Interpreter::NotInstruction_NotBoolean
