#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/NotInstruction_NotUInt32.h>
#include <Modloader/app/structs/InterpretedFrame.h>

namespace app::classes::System::Linq::Expressions::Interpreter::NotInstruction_NotUInt32 {
    IL2CPP_REGISTER_METHOD(0x02407270, int32_t, Run, (app::NotInstruction_NotUInt32 * this_ptr, app::InterpretedFrame* frame))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::NotInstruction_NotUInt32 * this_ptr))
} // namespace app::classes::System::Linq::Expressions::Interpreter::NotInstruction_NotUInt32
