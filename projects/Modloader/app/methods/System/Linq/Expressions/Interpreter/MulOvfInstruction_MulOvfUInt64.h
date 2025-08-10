#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/InterpretedFrame.h>
#include <Modloader/app/structs/MulOvfInstruction_MulOvfUInt64.h>

namespace app::classes::System::Linq::Expressions::Interpreter::MulOvfInstruction_MulOvfUInt64 {
    IL2CPP_REGISTER_METHOD(0x024000A0, int32_t, Run, app::MulOvfInstruction_MulOvfUInt64* this_ptr, app::InterpretedFrame* frame)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::MulOvfInstruction_MulOvfUInt64* this_ptr)
} // namespace app::classes::System::Linq::Expressions::Interpreter::MulOvfInstruction_MulOvfUInt64
