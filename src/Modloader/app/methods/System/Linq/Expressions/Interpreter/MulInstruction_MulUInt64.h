#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/InterpretedFrame.h>
#include <Modloader/app/structs/MulInstruction_MulUInt64.h>

namespace app::classes::System::Linq::Expressions::Interpreter::MulInstruction_MulUInt64 {
    IL2CPP_REGISTER_METHOD(0x023FED50, int32_t, Run, app::MulInstruction_MulUInt64* this_ptr, app::InterpretedFrame* frame)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::MulInstruction_MulUInt64* this_ptr)
} // namespace app::classes::System::Linq::Expressions::Interpreter::MulInstruction_MulUInt64
