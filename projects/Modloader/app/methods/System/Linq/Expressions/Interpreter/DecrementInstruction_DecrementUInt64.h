#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DecrementInstruction_DecrementUInt64.h>
#include <Modloader/app/structs/InterpretedFrame.h>

namespace app::classes::System::Linq::Expressions::Interpreter::DecrementInstruction_DecrementUInt64 {
    IL2CPP_REGISTER_METHOD(0x022DBE00, int32_t, Run, app::DecrementInstruction_DecrementUInt64* this_ptr, app::InterpretedFrame* frame)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::DecrementInstruction_DecrementUInt64* this_ptr)
} // namespace app::classes::System::Linq::Expressions::Interpreter::DecrementInstruction_DecrementUInt64
