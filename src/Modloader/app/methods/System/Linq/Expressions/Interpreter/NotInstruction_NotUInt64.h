#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/InterpretedFrame.h>
#include <Modloader/app/structs/NotInstruction_NotUInt64.h>

namespace app::classes::System::Linq::Expressions::Interpreter::NotInstruction_NotUInt64 {
    IL2CPP_REGISTER_METHOD(0x024073C0, int32_t, Run, app::NotInstruction_NotUInt64* this_ptr, app::InterpretedFrame* frame)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::NotInstruction_NotUInt64* this_ptr)
} // namespace app::classes::System::Linq::Expressions::Interpreter::NotInstruction_NotUInt64
