#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/InterpretedFrame.h>
#include <Modloader/app/structs/NullableMethodCallInstruction_HasValue.h>

namespace app::classes::System::Linq::Expressions::Interpreter::NullableMethodCallInstruction_HasValue {
    IL2CPP_REGISTER_METHOD(0x024086B0, int32_t, Run, app::NullableMethodCallInstruction_HasValue* this_ptr, app::InterpretedFrame* frame)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::NullableMethodCallInstruction_HasValue* this_ptr)
} // namespace app::classes::System::Linq::Expressions::Interpreter::NullableMethodCallInstruction_HasValue
